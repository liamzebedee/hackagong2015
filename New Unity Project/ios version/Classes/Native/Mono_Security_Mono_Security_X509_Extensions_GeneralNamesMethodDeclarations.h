#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t766;
// Mono.Security.ASN1
struct ASN1_t723;
// System.String[]
struct StringU5BU5D_t82;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m4103 (GeneralNames_t766 * __this, ASN1_t723 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t82* GeneralNames_get_DNSNames_m4104 (GeneralNames_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t82* GeneralNames_get_IPAddresses_m4105 (GeneralNames_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m4106 (GeneralNames_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
