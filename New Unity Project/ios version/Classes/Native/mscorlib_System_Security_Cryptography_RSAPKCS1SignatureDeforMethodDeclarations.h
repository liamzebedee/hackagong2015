#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t869;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t842;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m9253 (RSAPKCS1SignatureDeformatter_t869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m4683 (RSAPKCS1SignatureDeformatter_t869 * __this, AsymmetricAlgorithm_t842 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m9254 (RSAPKCS1SignatureDeformatter_t869 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m9255 (RSAPKCS1SignatureDeformatter_t869 * __this, AsymmetricAlgorithm_t842 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m9256 (RSAPKCS1SignatureDeformatter_t869 * __this, ByteU5BU5D_t67* ___rgbHash, ByteU5BU5D_t67* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
