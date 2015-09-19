#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1133;
// Mono.Math.BigInteger
struct BigInteger_t1134;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6712 (ModulusRing_t1133 * __this, BigInteger_t1134 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6713 (ModulusRing_t1133 * __this, BigInteger_t1134 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1134 * ModulusRing_Multiply_m6714 (ModulusRing_t1133 * __this, BigInteger_t1134 * ___a, BigInteger_t1134 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1134 * ModulusRing_Difference_m6715 (ModulusRing_t1133 * __this, BigInteger_t1134 * ___a, BigInteger_t1134 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1134 * ModulusRing_Pow_m6716 (ModulusRing_t1133 * __this, BigInteger_t1134 * ___a, BigInteger_t1134 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1134 * ModulusRing_Pow_m6717 (ModulusRing_t1133 * __this, uint32_t ___b, BigInteger_t1134 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
