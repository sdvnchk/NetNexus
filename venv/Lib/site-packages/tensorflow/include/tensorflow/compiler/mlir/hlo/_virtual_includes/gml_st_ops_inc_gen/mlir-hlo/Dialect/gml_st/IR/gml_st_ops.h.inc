/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace gml_st {
class LoopOp;
} // namespace gml_st
} // namespace mlir
namespace mlir {
namespace gml_st {
class MaterializeOp;
} // namespace gml_st
} // namespace mlir
namespace mlir {
namespace gml_st {
class PointOp;
} // namespace gml_st
} // namespace mlir
namespace mlir {
namespace gml_st {
class TileOp;
} // namespace gml_st
} // namespace mlir
namespace mlir {
namespace gml_st {
class YieldOp;
} // namespace gml_st
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace gml_st {

//===----------------------------------------------------------------------===//
// ::mlir::gml_st::LoopOp declarations
//===----------------------------------------------------------------------===//

class LoopOpAdaptor {
public:
  LoopOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  LoopOpAdaptor(LoopOp &op);

  ::mlir::ValueRange getOperands();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange lowerBound();
  ::mlir::ValueRange upperBound();
  ::mlir::ValueRange step();
  ::mlir::ValueRange inputs();
  ::mlir::ValueRange outputs();
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr iterator_typesAttr();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::ArrayAttr distribution_typesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > distribution_types();
  ::mlir::RegionRange getRegions();
  ::mlir::Region &region();
  ::mlir::LogicalResult verify(::mlir::Location loc);
private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
};
class LoopOp : public ::mlir::Op<LoopOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessor, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::SingleBlockImplicitTerminator<gml_st::YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::LoopLikeOpInterface::Trait, ::mlir::OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopOpAdaptor;
public:
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("iterator_types"), ::llvm::StringRef("distribution_types"), ::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::makeArrayRef(attrNames);
  }

  ::mlir::StringAttr iterator_typesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr iterator_typesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr distribution_typesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr distribution_typesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr operand_segment_sizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr operand_segment_sizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("gml_st.loop");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range lowerBound();
  ::mlir::Operation::operand_range upperBound();
  ::mlir::Operation::operand_range step();
  ::mlir::Operation::operand_range inputs();
  ::mlir::Operation::operand_range outputs();
  ::mlir::MutableOperandRange lowerBoundMutable();
  ::mlir::MutableOperandRange upperBoundMutable();
  ::mlir::MutableOperandRange stepMutable();
  ::mlir::MutableOperandRange inputsMutable();
  ::mlir::MutableOperandRange outputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range results();
  ::mlir::Region &region();
  ::mlir::ArrayAttr iterator_typesAttr();
  ::mlir::ArrayAttr iterator_types();
  ::mlir::ArrayAttr distribution_typesAttr();
  ::llvm::Optional< ::mlir::ArrayAttr > distribution_types();
  void iterator_typesAttr(::mlir::ArrayAttr attr);
  void distribution_typesAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeDistribution_typesAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, ValueRange inputs, ValueRange outputs, ArrayAttr iteratorTypes, Optional<ArrayAttr> distributionTypes, function_ref<void (OpBuilder &, Location, /*ivs=*/ValueRange,/*inputs=*/ValueRange, /*outputs=*/ValueRange)> bodyBuilderFn = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, ValueRange inputs, ValueRange outputs, ArrayAttr iteratorTypes, function_ref<void (OpBuilder &, Location, /*ivs=*/ValueRange,/*inputs=*/ValueRange, /*outputs=*/ValueRange)> bodyBuilderFn = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::ArrayAttr iterator_types, /*optional*/::mlir::ArrayAttr distribution_types);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult fold(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
  ::mlir::Region &getLoopBody();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    return name.getRegisteredInfo()->getAttributeNames()[index];
  }

public:
   /// Number of loops
   unsigned getNumLoops() { return step().size(); }

   /// Number of input operands
   unsigned getNumInputs() { return inputs().size(); }

   /// Number of output operands
   unsigned getNumOutputs() { return outputs().size(); }

   /// Number of operands controlling the loop: lbs, ubs, steps
   unsigned getNumControlOperands() { return 3 * getNumLoops(); }

   ValueRange getInductionVars() {
     return getBody()->getArguments().take_front(getNumLoops());
   }
   ValueRange getRegionInputArgs() {
     return getBody()->getArguments().slice(getNumLoops(), inputs().size());
   }
   ValueRange getRegionOutputArgs() {
     return getBody()->getArguments().take_back(outputs().size());
   }

   void setDistributionTypes(Builder& b, ArrayRef<StringRef> types) {
     assert(types.size() == getNumLoops() &&
            "expected distribution type for every dimension");
     distribution_typesAttr(b.getStrArrayAttr(types));
   }

   void setLowerBounds(ValueRange lowerBounds) {
     unsigned numLoops = getNumLoops();
     assert(lowerBounds.size() == numLoops &&
            "expected lower bounds for every loop dimension");
     for (unsigned i = 0; i < numLoops; ++i)
       setOperand(i, lowerBounds[i]);
   }

   void setUpperBounds(ValueRange upperBounds) {
     unsigned numLoops = getNumLoops();
     assert(upperBounds.size() == numLoops &&
            "expected upper bounds for every loop dimension");
     for (unsigned i = 0, pos = numLoops; i < numLoops; ++i, ++pos)
       setOperand(pos, upperBounds[i]);
   }

   void setSteps(ValueRange steps) {
     unsigned numLoops = getNumLoops();
     assert(steps.size() == numLoops &&
            "expected upper bounds for every loop dimension");
     for (unsigned i = 0, pos = 2 * numLoops; i < numLoops; ++i, ++pos)
       setOperand(pos, steps[i]);
   }

   /// Operand that corresponds to the `bbArg` block argument.
   OpOperand& getTiedOperand(BlockArgument& bbArg) {
     return getOperation()->getOpOperand(getNumControlOperands() +
                                         bbArg.getArgNumber() - getNumLoops());
   }

   /// Block argument that corresponds to the `input` or `output` operand.
   BlockArgument getTiedBlockArgument(OpOperand& operand) {
     auto operandIndex = operand.getOperandNumber();
     assert(
         operandIndex >= getNumControlOperands() &&
         operandIndex < getNumOperands() &&
         "tied block arg is defined only for `input` and `output` arguments");
     return getBody()->getArgument(operandIndex - 2 * getNumLoops());
   }

  /// Result that corresponds to the `outputs` argument of tensor type.
  OpResult getTiedOpResult(OpOperand& opOperand) {
     // No result can correspond to a memref argument.
     if (opOperand.get().getType().isa<MemRefType>()) return OpResult();

     // Check whether the operand index is in bounds of `outputs()` arg.
     int operandIndex = opOperand.getOperandNumber();
     int outputIndexStart =
         getNumControlOperands() + inputs().size();
     int outputIndexEnd = outputIndexStart + outputs().size();
     if (operandIndex < outputIndexStart || operandIndex >= outputIndexEnd)
       return OpResult();

     // Count tensor arguments in `outputs` to compute the result index.
     int tensorId = -1;
     for (int i = outputIndexStart; i <= operandIndex; ++i)
       tensorId += getOperand(i).getType().isa<RankedTensorType>();
     return getOperation()->getResult(tensorId);
   }

   /// Append `operand` to the `input` arguments.
   OpOperand& appendInputOperand(OpBuilder& builder, Value operand) {
     int numLoops = getNumLoops();
     int numInputs = getNumInputs();
     int numOutputs = getNumOutputs();

     getOperation()->insertOperands(getNumControlOperands() + numInputs,
                                    operand);
     getBody()->insertArgument(numLoops + numInputs, operand.getType(),
                               getLoc());
     getOperation()->setAttr(
         LoopOp::getOperandSegmentSizeAttr(),
         builder.getI32VectorAttr(
             {numLoops, numLoops, numLoops, numInputs + 1, numOutputs}));
     return getOperation()->getOpOperand(getNumControlOperands() + numInputs);
   }

   /// Append `operand` to the `output` arguments.
   OpOperand& appendOutputOperand(OpBuilder& builder, Value operand) {
     int numLoops = getNumLoops();
     int numInputs = getNumInputs();
     int numOutputs = getNumOutputs();

     getOperation()->insertOperands(
         getNumControlOperands() + numInputs + numOutputs, operand);
     getBody()->insertArgument(numLoops + numInputs + numOutputs,
                               operand.getType(), getLoc());
     getOperation()->setAttr(
         LoopOp::getOperandSegmentSizeAttr(),
         builder.getI32VectorAttr(
             {numLoops, numLoops, numLoops, numInputs, numOutputs + 1}));
     return getOperation()->getOpOperand(getNumControlOperands() + numInputs +
                                         numOutputs);
   }

   /// Erase `operand` from the `input` or `output` arguments.
   void eraseOperand(OpBuilder& builder, OpOperand& operand) {
     int numInputs = getNumInputs();
     int numLoops = getNumLoops();
     int numOutputs = getNumOutputs();
     int numControlOperands = getNumControlOperands();

     int operandIndex = operand.getOperandNumber();
     assert(operandIndex >= numControlOperands &&
            operandIndex < static_cast<int>(getNumOperands()) &&
            "Can erase only `input` or `output` operand");

     if (operandIndex >= numControlOperands + numInputs)
       --numOutputs;
     else
       --numInputs;

     getOperation()->eraseOperand(operandIndex);
     getBody()->eraseArgument(operandIndex - 2 * numLoops);
     getOperation()->setAttr(
         LoopOp::getOperandSegmentSizeAttr(),
         builder.getI32VectorAttr(
             {numLoops, numLoops, numLoops, numInputs, numOutputs}));
   }

   OpOperand* findInputOperand(Value value) {
     OperandRange::iterator it = llvm::find(inputs(), value);
     if (it == inputs().end()) return nullptr;
     return it.getBase();
   }

   OpOperand* findOutputOperand(Value value) {
     OperandRange::iterator it = llvm::find(outputs(), value);
     if (it == outputs().end()) return nullptr;
     return it.getBase();
   }

   /// Return whether the op has only MemRef input and outputs.
   bool hasBufferSemantics() {
     Operation* op = this->getOperation();
     return op->getNumResults() == 0 &&
            llvm::all_of(op->getOpOperands(), [&](OpOperand & operand) {
              return !operand.get().getType().template isa<ShapedType>() ||
                     operand.get().getType().template isa<MemRefType>();
            });
   }

   static constexpr StringRef getParallelIteratorTypeName() {
     return "parallel";
   }
   static constexpr StringRef getDistributionTypesAttrName() {
     return "distribution_types";
   }
   static constexpr StringRef getIteratorTypesAttrName() {
     return "iterator_types";
   }


   /// Return whether the loop dimension is parallel or not.
   bool isParallelDimension(unsigned dim) {
     StringAttr attr = this->iterator_types()[dim].cast<StringAttr>();
     return attr.getValue() == getParallelIteratorTypeName();
   }
};
} // namespace gml_st
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::gml_st::LoopOp)

namespace mlir {
namespace gml_st {

//===----------------------------------------------------------------------===//
// ::mlir::gml_st::MaterializeOp declarations
//===----------------------------------------------------------------------===//

class MaterializeOpAdaptor {
public:
  MaterializeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  MaterializeOpAdaptor(MaterializeOp &op);

  ::mlir::ValueRange getOperands();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::Value source();
  ::mlir::Value subset();
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::LogicalResult verify(::mlir::Location loc);
private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
};
class MaterializeOp : public ::mlir::Op<MaterializeOp, ::mlir::OpTrait::ZeroRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessor, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MaterializeOpAdaptor;
public:
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("gml_st.materialize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value source();
  ::mlir::Value subset();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange subsetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value subset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value subset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value subset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::llvm::Optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace gml_st
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::gml_st::MaterializeOp)

namespace mlir {
namespace gml_st {

//===----------------------------------------------------------------------===//
// ::mlir::gml_st::PointOp declarations
//===----------------------------------------------------------------------===//

class PointOpAdaptor {
public:
  PointOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  PointOpAdaptor(PointOp &op);

  ::mlir::ValueRange getOperands();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange offsets();
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr static_offsetsAttr();
  ::mlir::ArrayAttr static_offsets();
  ::mlir::LogicalResult verify(::mlir::Location loc);
private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
};
class PointOp : public ::mlir::Op<PointOp, ::mlir::OpTrait::ZeroRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessor, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PointOpAdaptor;
public:
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_offsets")};
    return ::llvm::makeArrayRef(attrNames);
  }

  ::mlir::StringAttr static_offsetsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr static_offsetsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("gml_st.point");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range offsets();
  ::mlir::MutableOperandRange offsetsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::ArrayAttr static_offsetsAttr();
  ::mlir::ArrayAttr static_offsets();
  void static_offsetsAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange offsets, ::mlir::ArrayAttr static_offsets);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange offsets, ::mlir::ArrayAttr static_offsets);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    return name.getRegisteredInfo()->getAttributeNames()[index];
  }

public:
};
} // namespace gml_st
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::gml_st::PointOp)

namespace mlir {
namespace gml_st {

//===----------------------------------------------------------------------===//
// ::mlir::gml_st::TileOp declarations
//===----------------------------------------------------------------------===//

class TileOpAdaptor {
public:
  TileOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  TileOpAdaptor(TileOp &op);

  ::mlir::ValueRange getOperands();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange offsets();
  ::mlir::ValueRange sizes();
  ::mlir::ValueRange strides();
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr static_offsetsAttr();
  ::mlir::ArrayAttr static_offsets();
  ::mlir::ArrayAttr static_sizesAttr();
  ::mlir::ArrayAttr static_sizes();
  ::mlir::ArrayAttr static_stridesAttr();
  ::mlir::ArrayAttr static_strides();
  ::mlir::LogicalResult verify(::mlir::Location loc);
private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
};
class TileOp : public ::mlir::Op<TileOp, ::mlir::OpTrait::ZeroRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessor, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileOpAdaptor;
public:
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_offsets"), ::llvm::StringRef("static_sizes"), ::llvm::StringRef("static_strides"), ::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::makeArrayRef(attrNames);
  }

  ::mlir::StringAttr static_offsetsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr static_offsetsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr static_sizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr static_sizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr static_stridesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr static_stridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr operand_segment_sizesAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr operand_segment_sizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("gml_st.tile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range offsets();
  ::mlir::Operation::operand_range sizes();
  ::mlir::Operation::operand_range strides();
  ::mlir::MutableOperandRange offsetsMutable();
  ::mlir::MutableOperandRange sizesMutable();
  ::mlir::MutableOperandRange stridesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value result();
  ::mlir::ArrayAttr static_offsetsAttr();
  ::mlir::ArrayAttr static_offsets();
  ::mlir::ArrayAttr static_sizesAttr();
  ::mlir::ArrayAttr static_sizes();
  ::mlir::ArrayAttr static_stridesAttr();
  ::mlir::ArrayAttr static_strides();
  void static_offsetsAttr(::mlir::ArrayAttr attr);
  void static_sizesAttr(::mlir::ArrayAttr attr);
  void static_stridesAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::ArrayAttr static_offsets, ::mlir::ArrayAttr static_sizes, ::mlir::ArrayAttr static_strides);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::ArrayAttr static_offsets, ::mlir::ArrayAttr static_sizes, ::mlir::ArrayAttr static_strides);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    return name.getRegisteredInfo()->getAttributeNames()[index];
  }

public:
};
} // namespace gml_st
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::gml_st::TileOp)

namespace mlir {
namespace gml_st {

//===----------------------------------------------------------------------===//
// ::mlir::gml_st::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  YieldOpAdaptor(YieldOp &op);

  ::mlir::ValueRange getOperands();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::ValueRange getODSOperands(unsigned index);
  ::mlir::ValueRange values();
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::LogicalResult verify(::mlir::Location loc);
private:
  ::mlir::ValueRange odsOperands;
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
};
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegion, ::mlir::OpTrait::ZeroResult, ::mlir::OpTrait::ZeroSuccessor, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::HasParent<::mlir::gml_st::LoopOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::ReturnLike, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldOpAdaptor;
public:
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("gml_st.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range values();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange values);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace gml_st
} // namespace mlir
DECLARE_EXPLICIT_TYPE_ID(::mlir::gml_st::YieldOp)


#endif  // GET_OP_CLASSES

