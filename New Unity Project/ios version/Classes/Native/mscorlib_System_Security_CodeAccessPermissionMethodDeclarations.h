#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t1542;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1168;
// System.Security.IPermission
struct IPermission_t1557;
// System.Type
struct Type_t;

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C" void CodeAccessPermission__ctor_m9431 (CodeAccessPermission_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C" bool CodeAccessPermission_Equals_m9432 (CodeAccessPermission_t1542 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C" int32_t CodeAccessPermission_GetHashCode_m9433 (CodeAccessPermission_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C" String_t* CodeAccessPermission_ToString_m9434 (CodeAccessPermission_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C" SecurityElement_t1168 * CodeAccessPermission_Element_m9435 (CodeAccessPermission_t1542 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C" void CodeAccessPermission_ThrowInvalidPermission_m9436 (Object_t * __this /* static, unused */, Object_t * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
