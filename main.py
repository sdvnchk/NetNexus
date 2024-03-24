# Импорт необходимых модулей и классов из библиотек
from fastapi import FastAPI, UploadFile, File
from fastapi.responses import FileResponse
from fastapi.middleware.cors import CORSMiddleware
import os
import subprocess

# Создание экземпляра приложения FastAPI
app = FastAPI()

# Добавление middleware для обработки CORS (Cross-Origin Resource Sharing)
# Это позволяет серверу принимать запросы от других источников (например, веб-страницы)
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # Разрешение всех источников (не безопасно для продакшена)
    allow_credentials=True,
    allow_methods=["*"],  # Разрешение всех HTTP-методов
    allow_headers=["*"]   # Разрешение всех HTTP-заголовков
)

# Функция для разделения аудиофайла на вокал и аккомпанемент с использованием Deezer Spleeter
def split_audio(audio_file_path):
    # Создаем папку для временного сохранения разделенных аудиофайлов
    temp_output_folder = "output"
    os.makedirs(temp_output_folder, exist_ok=True)
    
    # Команда для разделения аудио с помощью Deezer Spleeter
    command = f"python -m spleeter separate -p spleeter:2stems -o {temp_output_folder} {audio_file_path}"
    
    # Выполнение команды через subprocess
    subprocess.run(command, shell=True)
    
    # Возвращаем пути к разделенным аудиофайлам
    vocals_file = os.path.join(temp_output_folder, "vocals.wav")
    accompaniment_file = os.path.join(temp_output_folder, "accompaniment.wav")
    
    return vocals_file, accompaniment_file

# Обработчик POST-запроса для загрузки аудиофайла и его разделения
@app.post("/split/")
async def split_endpoint(file: UploadFile = File(...)):
    # Получаем содержимое загруженного аудиофайла
    contents = await file.read()
    
    # Путь для временного сохранения загруженного аудиофайла
    temp_audio_path = "temp_audio.wav"
    
    # Сохраняем загруженный аудиофайл на диск
    with open(temp_audio_path, "wb") as f:
        f.write(contents)
    
    # Вызываем функцию разделения аудио
    vocals_file, accompaniment_file = split_audio(temp_audio_path)
    
    # Удаляем временный файл аудио после разделения
    os.remove(temp_audio_path)
    
    # Возвращаем пути к разделенным аудиофайлам
    return {"vocals_file": vocals_file, "accompaniment_file": accompaniment_file}

# Обработчик GET-запроса для скачивания разделенных аудиофайлов
@app.get("/download/{file_type}")
async def download_file(file_type: str):
    if file_type == "vocals":
        return FileResponse("output/temp_audio/vocals.wav")
    elif file_type == "accompaniment":
        return FileResponse("output/temp_audio/accompaniment.wav")
    else:
        return {"error": "Invalid file type. Use 'vocals' or 'accompaniment'."}
