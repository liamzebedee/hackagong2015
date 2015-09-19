#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t67;
// System.Security.Cryptography.RSA
struct RSA_t744;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m6783 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m6784 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t67* CryptoConvert_GetBytesLE_m6785 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t67* CryptoConvert_ToCapiPrivateKeyBlob_m6786 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t744 * CryptoConvert_FromCapiPublicKeyBlob_m6787 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t744 * CryptoConvert_FromCapiPublicKeyBlob_m6788 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t67* CryptoConvert_ToCapiPublicKeyBlob_m6789 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t67* CryptoConvert_ToCapiKeyBlob_m6790 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
