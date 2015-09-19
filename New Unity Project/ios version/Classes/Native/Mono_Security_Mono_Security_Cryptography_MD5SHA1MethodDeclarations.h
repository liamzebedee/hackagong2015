#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t774;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.Security.Cryptography.RSA
struct RSA_t744;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C" void MD5SHA1__ctor_m4128 (MD5SHA1_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C" void MD5SHA1_Initialize_m4129 (MD5SHA1_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C" ByteU5BU5D_t67* MD5SHA1_HashFinal_m4130 (MD5SHA1_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5SHA1_HashCore_m4131 (MD5SHA1_t774 * __this, ByteU5BU5D_t67* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t67* MD5SHA1_CreateSignature_m4132 (MD5SHA1_t774 * __this, RSA_t744 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool MD5SHA1_VerifySignature_m4133 (MD5SHA1_t774 * __this, RSA_t744 * ___rsa, ByteU5BU5D_t67* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
