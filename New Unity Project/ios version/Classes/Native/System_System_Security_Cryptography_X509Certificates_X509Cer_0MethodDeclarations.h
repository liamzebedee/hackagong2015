#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t884;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t948;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t944;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t842;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t939;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t941;
// Mono.Security.ASN1
struct ASN1_t723;
// System.Text.StringBuilder
struct StringBuilder_t352;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t750;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" void X509Certificate2__ctor_m4723 (X509Certificate2_t884 * __this, ByteU5BU5D_t67* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C" void X509Certificate2__cctor_m4990 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C" X509ExtensionCollection_t948 * X509Certificate2_get_Extensions_m4991 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C" X500DistinguishedName_t944 * X509Certificate2_get_IssuerName_m4992 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C" DateTime_t538  X509Certificate2_get_NotAfter_m4993 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C" DateTime_t538  X509Certificate2_get_NotBefore_m4994 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C" AsymmetricAlgorithm_t842 * X509Certificate2_get_PrivateKey_m4728 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C" PublicKey_t939 * X509Certificate2_get_PublicKey_m4995 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C" String_t* X509Certificate2_get_SerialNumber_m4996 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C" Oid_t941 * X509Certificate2_get_SignatureAlgorithm_m4997 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C" X500DistinguishedName_t944 * X509Certificate2_get_SubjectName_m4998 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C" String_t* X509Certificate2_get_Thumbprint_m4999 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C" int32_t X509Certificate2_get_Version_m5000 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C" String_t* X509Certificate2_GetNameInfo_m5001 (X509Certificate2_t884 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C" ASN1_t723 * X509Certificate2_Find_m5002 (X509Certificate2_t884 * __this, ByteU5BU5D_t67* ___oid, ASN1_t723 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C" String_t* X509Certificate2_GetValueAsString_m5003 (X509Certificate2_t884 * __this, ASN1_t723 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C" void X509Certificate2_ImportPkcs12_m5004 (X509Certificate2_t884 * __this, ByteU5BU5D_t67* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m5005 (X509Certificate2_t884 * __this, ByteU5BU5D_t67* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C" void X509Certificate2_Reset_m5006 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C" String_t* X509Certificate2_ToString_m5007 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C" String_t* X509Certificate2_ToString_m5008 (X509Certificate2_t884 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C" void X509Certificate2_AppendBuffer_m5009 (Object_t * __this /* static, unused */, StringBuilder_t352 * ___sb, ByteU5BU5D_t67* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C" bool X509Certificate2_Verify_m5010 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C" X509Certificate_t750 * X509Certificate2_get_MonoCertificate_m5011 (X509Certificate2_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
