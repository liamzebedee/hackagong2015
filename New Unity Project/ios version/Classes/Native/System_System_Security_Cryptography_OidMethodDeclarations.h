#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.Oid
struct Oid_t941;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.Oid::.ctor()
extern "C" void Oid__ctor_m5161 (Oid_t941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern "C" void Oid__ctor_m5162 (Oid_t941 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern "C" void Oid__ctor_m5163 (Oid_t941 * __this, String_t* ___value, String_t* ___friendlyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern "C" void Oid__ctor_m5164 (Oid_t941 * __this, Oid_t941 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern "C" String_t* Oid_get_FriendlyName_m5165 (Oid_t941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_Value()
extern "C" String_t* Oid_get_Value_m5166 (Oid_t941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetName(System.String)
extern "C" String_t* Oid_GetName_m5167 (Oid_t941 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
