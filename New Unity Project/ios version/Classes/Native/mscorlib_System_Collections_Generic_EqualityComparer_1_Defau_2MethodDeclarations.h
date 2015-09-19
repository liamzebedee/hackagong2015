#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1972;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13307_gshared (DefaultComparer_t1972 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13307(__this, method) (( void (*) (DefaultComparer_t1972 *, const MethodInfo*))DefaultComparer__ctor_m13307_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13308_gshared (DefaultComparer_t1972 * __this, UIVertex_t241  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13308(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1972 *, UIVertex_t241 , const MethodInfo*))DefaultComparer_GetHashCode_m13308_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13309_gshared (DefaultComparer_t1972 * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13309(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1972 *, UIVertex_t241 , UIVertex_t241 , const MethodInfo*))DefaultComparer_Equals_m13309_gshared)(__this, ___x, ___y, method)
