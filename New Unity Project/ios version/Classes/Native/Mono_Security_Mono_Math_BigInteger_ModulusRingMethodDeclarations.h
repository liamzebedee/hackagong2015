#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t716;
// Mono.Math.BigInteger
struct BigInteger_t717;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3760 (ModulusRing_t716 * __this, BigInteger_t717 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3761 (ModulusRing_t716 * __this, BigInteger_t717 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t717 * ModulusRing_Multiply_m3762 (ModulusRing_t716 * __this, BigInteger_t717 * ___a, BigInteger_t717 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t717 * ModulusRing_Difference_m3763 (ModulusRing_t716 * __this, BigInteger_t717 * ___a, BigInteger_t717 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t717 * ModulusRing_Pow_m3764 (ModulusRing_t716 * __this, BigInteger_t717 * ___a, BigInteger_t717 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t717 * ModulusRing_Pow_m3765 (ModulusRing_t716 * __this, uint32_t ___b, BigInteger_t717 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
