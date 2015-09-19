#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t757;
// Mono.Security.ASN1
struct ASN1_t723;
// System.Byte[]
struct ByteU5BU5D_t67;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t752;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m4041 (X509CrlEntry_t757 * __this, ASN1_t723 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t67* X509CrlEntry_get_SerialNumber_m4042 (X509CrlEntry_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t538  X509CrlEntry_get_RevocationDate_m4043 (X509CrlEntry_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t752 * X509CrlEntry_get_Extensions_m4044 (X509CrlEntry_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
