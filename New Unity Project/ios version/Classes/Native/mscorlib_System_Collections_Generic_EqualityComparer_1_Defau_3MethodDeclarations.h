#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2063;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14687_gshared (DefaultComparer_t2063 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14687(__this, method) (( void (*) (DefaultComparer_t2063 *, const MethodInfo*))DefaultComparer__ctor_m14687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14688_gshared (DefaultComparer_t2063 * __this, Vector3_t3  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14688(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2063 *, Vector3_t3 , const MethodInfo*))DefaultComparer_GetHashCode_m14688_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14689_gshared (DefaultComparer_t2063 * __this, Vector3_t3  ___x, Vector3_t3  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14689(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2063 *, Vector3_t3 , Vector3_t3 , const MethodInfo*))DefaultComparer_Equals_m14689_gshared)(__this, ___x, ___y, method)
