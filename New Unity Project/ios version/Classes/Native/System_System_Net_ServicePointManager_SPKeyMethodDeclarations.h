#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/SPKey
struct SPKey_t932;
// System.Uri
struct Uri_t25;
// System.Object
struct Object_t;

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
extern "C" void SPKey__ctor_m4923 (SPKey_t932 * __this, Uri_t25 * ___uri, bool ___use_connect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern "C" int32_t SPKey_GetHashCode_m4924 (SPKey_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern "C" bool SPKey_Equals_m4925 (SPKey_t932 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
