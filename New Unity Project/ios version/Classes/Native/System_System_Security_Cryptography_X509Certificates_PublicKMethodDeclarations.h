#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t939;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t750;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t940;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t842;
// System.Security.Cryptography.Oid
struct Oid_t941;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.Security.Cryptography.DSA
struct DSA_t751;
// System.Security.Cryptography.RSA
struct RSA_t744;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4966 (PublicKey_t939 * __this, X509Certificate_t750 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t940 * PublicKey_get_EncodedKeyValue_m4967 (PublicKey_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t940 * PublicKey_get_EncodedParameters_m4968 (PublicKey_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t842 * PublicKey_get_Key_m4969 (PublicKey_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t941 * PublicKey_get_Oid_m4970 (PublicKey_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t67* PublicKey_GetUnsignedBigInteger_m4971 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t751 * PublicKey_DecodeDSA_m4972 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___rawPublicKey, ByteU5BU5D_t67* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t744 * PublicKey_DecodeRSA_m4973 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
