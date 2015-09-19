#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t1150;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1151;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m6918 (SafeBag_t1150 * __this, String_t* ___bagOID, ASN1_t1151 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m6919 (SafeBag_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t1151 * SafeBag_get_ASN1_m6920 (SafeBag_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
