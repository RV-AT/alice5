#ifndef OPCODE_STRUCTS_H
#define OPCODE_STRUCTS_H

// Automatically generated by generate_ops.py. DO NOT EDIT.

#include "state.h"

// OpFunctionParameter instruction (code 55).
struct InsnFunctionParameter : public Instruction {
    InsnFunctionParameter(uint32_t type, uint32_t resultId) : type(type), resultId(resultId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    virtual void step(State *state) { state->stepFunctionParameter(*this); }
};

// OpFunctionCall instruction (code 57).
struct InsnFunctionCall : public Instruction {
    InsnFunctionCall(uint32_t type, uint32_t resultId, uint32_t functionId, std::vector<uint32_t> operandId) : type(type), resultId(resultId), functionId(functionId), operandId(operandId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t functionId; // operand from register
    std::vector<uint32_t> operandId; // operand from register
    virtual void step(State *state) { state->stepFunctionCall(*this); }
};

// OpLoad instruction (code 61).
struct InsnLoad : public Instruction {
    InsnLoad(uint32_t type, uint32_t resultId, uint32_t pointerId, uint32_t memoryAccess) : type(type), resultId(resultId), pointerId(pointerId), memoryAccess(memoryAccess) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t pointerId; // operand from register
    uint32_t memoryAccess; // MemoryAccess (optional)
    virtual void step(State *state) { state->stepLoad(*this); }
};

// OpStore instruction (code 62).
struct InsnStore : public Instruction {
    InsnStore(uint32_t pointerId, uint32_t objectId, uint32_t memoryAccess) : pointerId(pointerId), objectId(objectId), memoryAccess(memoryAccess) {}
    uint32_t pointerId; // operand from register
    uint32_t objectId; // operand from register
    uint32_t memoryAccess; // MemoryAccess (optional)
    virtual void step(State *state) { state->stepStore(*this); }
};

// OpAccessChain instruction (code 65).
struct InsnAccessChain : public Instruction {
    InsnAccessChain(uint32_t type, uint32_t resultId, uint32_t baseId, std::vector<uint32_t> indexesId) : type(type), resultId(resultId), baseId(baseId), indexesId(indexesId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t baseId; // operand from register
    std::vector<uint32_t> indexesId; // operand from register
    virtual void step(State *state) { state->stepAccessChain(*this); }
};

// OpVectorShuffle instruction (code 79).
struct InsnVectorShuffle : public Instruction {
    InsnVectorShuffle(uint32_t type, uint32_t resultId, uint32_t vector1Id, uint32_t vector2Id, std::vector<uint32_t> componentsId) : type(type), resultId(resultId), vector1Id(vector1Id), vector2Id(vector2Id), componentsId(componentsId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t vector1Id; // operand from register
    uint32_t vector2Id; // operand from register
    std::vector<uint32_t> componentsId; // LiteralInteger
    virtual void step(State *state) { state->stepVectorShuffle(*this); }
};

// OpCompositeConstruct instruction (code 80).
struct InsnCompositeConstruct : public Instruction {
    InsnCompositeConstruct(uint32_t type, uint32_t resultId, std::vector<uint32_t> constituentsId) : type(type), resultId(resultId), constituentsId(constituentsId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    std::vector<uint32_t> constituentsId; // operand from register
    virtual void step(State *state) { state->stepCompositeConstruct(*this); }
};

// OpCompositeExtract instruction (code 81).
struct InsnCompositeExtract : public Instruction {
    InsnCompositeExtract(uint32_t type, uint32_t resultId, uint32_t compositeId, std::vector<uint32_t> indexesId) : type(type), resultId(resultId), compositeId(compositeId), indexesId(indexesId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t compositeId; // operand from register
    std::vector<uint32_t> indexesId; // LiteralInteger
    virtual void step(State *state) { state->stepCompositeExtract(*this); }
};

// OpConvertFToS instruction (code 110).
struct InsnConvertFToS : public Instruction {
    InsnConvertFToS(uint32_t type, uint32_t resultId, uint32_t floatValueId) : type(type), resultId(resultId), floatValueId(floatValueId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t floatValueId; // operand from register
    virtual void step(State *state) { state->stepConvertFToS(*this); }
};

// OpConvertSToF instruction (code 111).
struct InsnConvertSToF : public Instruction {
    InsnConvertSToF(uint32_t type, uint32_t resultId, uint32_t signedValueId) : type(type), resultId(resultId), signedValueId(signedValueId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t signedValueId; // operand from register
    virtual void step(State *state) { state->stepConvertSToF(*this); }
};

// OpFNegate instruction (code 127).
struct InsnFNegate : public Instruction {
    InsnFNegate(uint32_t type, uint32_t resultId, uint32_t operandId) : type(type), resultId(resultId), operandId(operandId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operandId; // operand from register
    virtual void step(State *state) { state->stepFNegate(*this); }
};

// OpIAdd instruction (code 128).
struct InsnIAdd : public Instruction {
    InsnIAdd(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepIAdd(*this); }
};

// OpFAdd instruction (code 129).
struct InsnFAdd : public Instruction {
    InsnFAdd(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFAdd(*this); }
};

// OpFSub instruction (code 131).
struct InsnFSub : public Instruction {
    InsnFSub(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFSub(*this); }
};

// OpFMul instruction (code 133).
struct InsnFMul : public Instruction {
    InsnFMul(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFMul(*this); }
};

// OpFDiv instruction (code 136).
struct InsnFDiv : public Instruction {
    InsnFDiv(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFDiv(*this); }
};

// OpFMod instruction (code 141).
struct InsnFMod : public Instruction {
    InsnFMod(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFMod(*this); }
};

// OpVectorTimesScalar instruction (code 142).
struct InsnVectorTimesScalar : public Instruction {
    InsnVectorTimesScalar(uint32_t type, uint32_t resultId, uint32_t vectorId, uint32_t scalarId) : type(type), resultId(resultId), vectorId(vectorId), scalarId(scalarId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t vectorId; // operand from register
    uint32_t scalarId; // operand from register
    virtual void step(State *state) { state->stepVectorTimesScalar(*this); }
};

// OpDot instruction (code 148).
struct InsnDot : public Instruction {
    InsnDot(uint32_t type, uint32_t resultId, uint32_t vector1Id, uint32_t vector2Id) : type(type), resultId(resultId), vector1Id(vector1Id), vector2Id(vector2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t vector1Id; // operand from register
    uint32_t vector2Id; // operand from register
    virtual void step(State *state) { state->stepDot(*this); }
};

// OpLogicalNot instruction (code 168).
struct InsnLogicalNot : public Instruction {
    InsnLogicalNot(uint32_t type, uint32_t resultId, uint32_t operandId) : type(type), resultId(resultId), operandId(operandId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operandId; // operand from register
    virtual void step(State *state) { state->stepLogicalNot(*this); }
};

// OpSelect instruction (code 169).
struct InsnSelect : public Instruction {
    InsnSelect(uint32_t type, uint32_t resultId, uint32_t conditionId, uint32_t object1Id, uint32_t object2Id) : type(type), resultId(resultId), conditionId(conditionId), object1Id(object1Id), object2Id(object2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t conditionId; // operand from register
    uint32_t object1Id; // operand from register
    uint32_t object2Id; // operand from register
    virtual void step(State *state) { state->stepSelect(*this); }
};

// OpIEqual instruction (code 170).
struct InsnIEqual : public Instruction {
    InsnIEqual(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepIEqual(*this); }
};

// OpSLessThan instruction (code 177).
struct InsnSLessThan : public Instruction {
    InsnSLessThan(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepSLessThan(*this); }
};

// OpFOrdEqual instruction (code 180).
struct InsnFOrdEqual : public Instruction {
    InsnFOrdEqual(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFOrdEqual(*this); }
};

// OpFOrdLessThan instruction (code 184).
struct InsnFOrdLessThan : public Instruction {
    InsnFOrdLessThan(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFOrdLessThan(*this); }
};

// OpFOrdGreaterThan instruction (code 186).
struct InsnFOrdGreaterThan : public Instruction {
    InsnFOrdGreaterThan(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFOrdGreaterThan(*this); }
};

// OpFOrdLessThanEqual instruction (code 188).
struct InsnFOrdLessThanEqual : public Instruction {
    InsnFOrdLessThanEqual(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFOrdLessThanEqual(*this); }
};

// OpFOrdGreaterThanEqual instruction (code 190).
struct InsnFOrdGreaterThanEqual : public Instruction {
    InsnFOrdGreaterThanEqual(uint32_t type, uint32_t resultId, uint32_t operand1Id, uint32_t operand2Id) : type(type), resultId(resultId), operand1Id(operand1Id), operand2Id(operand2Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t operand1Id; // operand from register
    uint32_t operand2Id; // operand from register
    virtual void step(State *state) { state->stepFOrdGreaterThanEqual(*this); }
};

// OpPhi instruction (code 245).
struct InsnPhi : public Instruction {
    InsnPhi(uint32_t type, uint32_t resultId, std::vector<uint32_t> operandId) : type(type), resultId(resultId), operandId(operandId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    std::vector<uint32_t> operandId; // PairIdRefIdRef
    virtual void step(State *state) { state->stepPhi(*this); }
};

// OpBranch instruction (code 249).
struct InsnBranch : public Instruction {
    InsnBranch(uint32_t targetLabelId) : targetLabelId(targetLabelId) {}
    uint32_t targetLabelId; // operand from register
    virtual void step(State *state) { state->stepBranch(*this); }
};

// OpBranchConditional instruction (code 250).
struct InsnBranchConditional : public Instruction {
    InsnBranchConditional(uint32_t conditionId, uint32_t trueLabelId, uint32_t falseLabelId, std::vector<uint32_t> branchweightsId) : conditionId(conditionId), trueLabelId(trueLabelId), falseLabelId(falseLabelId), branchweightsId(branchweightsId) {}
    uint32_t conditionId; // operand from register
    uint32_t trueLabelId; // operand from register
    uint32_t falseLabelId; // operand from register
    std::vector<uint32_t> branchweightsId; // LiteralInteger
    virtual void step(State *state) { state->stepBranchConditional(*this); }
};

// OpReturn instruction (code 253).
struct InsnReturn : public Instruction {
    InsnReturn() {}
    virtual void step(State *state) { state->stepReturn(*this); }
};

// OpReturnValue instruction (code 254).
struct InsnReturnValue : public Instruction {
    InsnReturnValue(uint32_t valueId) : valueId(valueId) {}
    uint32_t valueId; // operand from register
    virtual void step(State *state) { state->stepReturnValue(*this); }
};

// GLSLstd450FAbs instruction (code 4).
struct InsnGLSLstd450FAbs : public Instruction {
    InsnGLSLstd450FAbs(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450FAbs(*this); }
};

// GLSLstd450Floor instruction (code 8).
struct InsnGLSLstd450Floor : public Instruction {
    InsnGLSLstd450Floor(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Floor(*this); }
};

// GLSLstd450Sin instruction (code 13).
struct InsnGLSLstd450Sin : public Instruction {
    InsnGLSLstd450Sin(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Sin(*this); }
};

// GLSLstd450Cos instruction (code 14).
struct InsnGLSLstd450Cos : public Instruction {
    InsnGLSLstd450Cos(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Cos(*this); }
};

// GLSLstd450Pow instruction (code 26).
struct InsnGLSLstd450Pow : public Instruction {
    InsnGLSLstd450Pow(uint32_t type, uint32_t resultId, uint32_t xId, uint32_t yId) : type(type), resultId(resultId), xId(xId), yId(yId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    uint32_t yId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Pow(*this); }
};

// GLSLstd450FMin instruction (code 37).
struct InsnGLSLstd450FMin : public Instruction {
    InsnGLSLstd450FMin(uint32_t type, uint32_t resultId, uint32_t xId, uint32_t yId) : type(type), resultId(resultId), xId(xId), yId(yId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    uint32_t yId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450FMin(*this); }
};

// GLSLstd450FMax instruction (code 40).
struct InsnGLSLstd450FMax : public Instruction {
    InsnGLSLstd450FMax(uint32_t type, uint32_t resultId, uint32_t xId, uint32_t yId) : type(type), resultId(resultId), xId(xId), yId(yId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    uint32_t yId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450FMax(*this); }
};

// GLSLstd450Length instruction (code 66).
struct InsnGLSLstd450Length : public Instruction {
    InsnGLSLstd450Length(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Length(*this); }
};

// GLSLstd450Distance instruction (code 67).
struct InsnGLSLstd450Distance : public Instruction {
    InsnGLSLstd450Distance(uint32_t type, uint32_t resultId, uint32_t p0Id, uint32_t p1Id) : type(type), resultId(resultId), p0Id(p0Id), p1Id(p1Id) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t p0Id; // operand from register
    uint32_t p1Id; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Distance(*this); }
};

// GLSLstd450Cross instruction (code 68).
struct InsnGLSLstd450Cross : public Instruction {
    InsnGLSLstd450Cross(uint32_t type, uint32_t resultId, uint32_t xId, uint32_t yId) : type(type), resultId(resultId), xId(xId), yId(yId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    uint32_t yId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Cross(*this); }
};

// GLSLstd450Normalize instruction (code 69).
struct InsnGLSLstd450Normalize : public Instruction {
    InsnGLSLstd450Normalize(uint32_t type, uint32_t resultId, uint32_t xId) : type(type), resultId(resultId), xId(xId) {}
    uint32_t type; // result type
    uint32_t resultId; // SSA register for result value
    uint32_t xId; // operand from register
    virtual void step(State *state) { state->stepGLSLstd450Normalize(*this); }
};


#endif // OPCODE_STRUCTS_H
