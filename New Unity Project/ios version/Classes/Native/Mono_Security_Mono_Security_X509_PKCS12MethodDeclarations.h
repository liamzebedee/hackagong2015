#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t747;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t724;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t748;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t692;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t728;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t738;
// Mono.Security.ASN1
struct ASN1_t723;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m3959 (PKCS12_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m3960 (PKCS12_t747 * __this, ByteU5BU5D_t67* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m3961 (PKCS12_t747 * __this, ByteU5BU5D_t67* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m3962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m3963 (PKCS12_t747 * __this, ByteU5BU5D_t67* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m3964 (PKCS12_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m3965 (PKCS12_t747 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t724 * PKCS12_get_Keys_m3966 (PKCS12_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t748 * PKCS12_get_Certificates_m3967 (PKCS12_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m3968 (PKCS12_t747 * __this, ByteU5BU5D_t67* ___expected, ByteU5BU5D_t67* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t692 * PKCS12_GetSymmetricAlgorithm_m3969 (PKCS12_t747 * __this, String_t* ___algorithmOid, ByteU5BU5D_t67* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS12_Decrypt_m3970 (PKCS12_t747 * __this, String_t* ___algorithmOid, ByteU5BU5D_t67* ___salt, int32_t ___iterationCount, ByteU5BU5D_t67* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t67* PKCS12_Decrypt_m3971 (PKCS12_t747 * __this, EncryptedData_t728 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t854  PKCS12_GetExistingParameters_m3972 (PKCS12_t747 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m3973 (PKCS12_t747 * __this, PrivateKeyInfo_t738 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m3974 (PKCS12_t747 * __this, ASN1_t723 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t67* PKCS12_MAC_m3975 (PKCS12_t747 * __this, ByteU5BU5D_t67* ___password, ByteU5BU5D_t67* ___salt, int32_t ___iterations, ByteU5BU5D_t67* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m3976 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
