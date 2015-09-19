#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2084;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14978_gshared (DefaultComparer_t2084 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14978(__this, method) (( void (*) (DefaultComparer_t2084 *, const MethodInfo*))DefaultComparer__ctor_m14978_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14979_gshared (DefaultComparer_t2084 * __this, Vector2_t15  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14979(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2084 *, Vector2_t15 , const MethodInfo*))DefaultComparer_GetHashCode_m14979_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14980_gshared (DefaultComparer_t2084 * __this, Vector2_t15  ___x, Vector2_t15  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14980(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2084 *, Vector2_t15 , Vector2_t15 , const MethodInfo*))DefaultComparer_Equals_m14980_gshared)(__this, ___x, ___y, method)
