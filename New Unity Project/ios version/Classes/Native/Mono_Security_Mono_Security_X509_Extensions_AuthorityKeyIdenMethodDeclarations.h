#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct AuthorityKeyIdentifierExtension_t763;
// Mono.Security.X509.X509Extension
struct X509Extension_t759;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void AuthorityKeyIdentifierExtension__ctor_m4089 (AuthorityKeyIdentifierExtension_t763 * __this, X509Extension_t759 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::Decode()
extern "C" void AuthorityKeyIdentifierExtension_Decode_m4090 (AuthorityKeyIdentifierExtension_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::get_Identifier()
extern "C" ByteU5BU5D_t67* AuthorityKeyIdentifierExtension_get_Identifier_m4091 (AuthorityKeyIdentifierExtension_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::ToString()
extern "C" String_t* AuthorityKeyIdentifierExtension_ToString_m4092 (AuthorityKeyIdentifierExtension_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
