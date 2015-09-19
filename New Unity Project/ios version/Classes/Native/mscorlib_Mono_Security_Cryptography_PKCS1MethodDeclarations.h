#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t67;
// System.Security.Cryptography.RSA
struct RSA_t744;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t690;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t735;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m6853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m6854 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___array1, ByteU5BU5D_t67* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t67* PKCS1_I2OSP_m6855 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_OS2IP_m6856 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_RSAEP_m6857 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, ByteU5BU5D_t67* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_RSASP1_m6858 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, ByteU5BU5D_t67* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_RSAVP1_m6859 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, ByteU5BU5D_t67* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_Encrypt_v15_m6860 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, RandomNumberGenerator_t690 * ___rng, ByteU5BU5D_t67* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS1_Sign_v15_m6861 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, HashAlgorithm_t735 * ___hash, ByteU5BU5D_t67* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m6862 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, HashAlgorithm_t735 * ___hash, ByteU5BU5D_t67* ___hashValue, ByteU5BU5D_t67* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m6863 (Object_t * __this /* static, unused */, RSA_t744 * ___rsa, HashAlgorithm_t735 * ___hash, ByteU5BU5D_t67* ___hashValue, ByteU5BU5D_t67* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t67* PKCS1_Encode_v15_m6864 (Object_t * __this /* static, unused */, HashAlgorithm_t735 * ___hash, ByteU5BU5D_t67* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
