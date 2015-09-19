#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t736;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
extern "C" void MD2Managed__ctor_m3892 (MD2Managed_t736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
extern "C" void MD2Managed__cctor_m3893 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
extern "C" ByteU5BU5D_t67* MD2Managed_Padding_m3894 (MD2Managed_t736 * __this, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
extern "C" void MD2Managed_Initialize_m3895 (MD2Managed_t736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD2Managed_HashCore_m3896 (MD2Managed_t736 * __this, ByteU5BU5D_t67* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
extern "C" ByteU5BU5D_t67* MD2Managed_HashFinal_m3897 (MD2Managed_t736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C" void MD2Managed_MD2Transform_m3898 (MD2Managed_t736 * __this, ByteU5BU5D_t67* ___state, ByteU5BU5D_t67* ___checksum, ByteU5BU5D_t67* ___block, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
