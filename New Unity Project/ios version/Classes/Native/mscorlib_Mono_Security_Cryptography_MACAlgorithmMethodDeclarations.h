#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1142;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t692;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m6849 (MACAlgorithm_t1142 * __this, SymmetricAlgorithm_t692 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m6850 (MACAlgorithm_t1142 * __this, ByteU5BU5D_t67* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m6851 (MACAlgorithm_t1142 * __this, ByteU5BU5D_t67* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t67* MACAlgorithm_Final_m6852 (MACAlgorithm_t1142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
