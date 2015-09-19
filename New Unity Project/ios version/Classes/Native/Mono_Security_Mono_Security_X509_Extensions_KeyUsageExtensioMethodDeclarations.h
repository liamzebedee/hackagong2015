#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t768;
// Mono.Security.X509.X509Extension
struct X509Extension_t759;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"

// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void KeyUsageExtension__ctor_m4107 (KeyUsageExtension_t768 * __this, X509Extension_t759 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Decode()
extern "C" void KeyUsageExtension_Decode_m4108 (KeyUsageExtension_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Encode()
extern "C" void KeyUsageExtension_Encode_m4109 (KeyUsageExtension_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
extern "C" bool KeyUsageExtension_Support_m4110 (KeyUsageExtension_t768 * __this, int32_t ___usage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.KeyUsageExtension::ToString()
extern "C" String_t* KeyUsageExtension_ToString_m4111 (KeyUsageExtension_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
