#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1800;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11119_gshared (DefaultComparer_t1800 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11119(__this, method) (( void (*) (DefaultComparer_t1800 *, const MethodInfo*))DefaultComparer__ctor_m11119_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11120_gshared (DefaultComparer_t1800 * __this, RaycastResult_t88  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11120(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1800 *, RaycastResult_t88 , const MethodInfo*))DefaultComparer_GetHashCode_m11120_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11121_gshared (DefaultComparer_t1800 * __this, RaycastResult_t88  ___x, RaycastResult_t88  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11121(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1800 *, RaycastResult_t88 , RaycastResult_t88 , const MethodInfo*))DefaultComparer_Equals_m11121_gshared)(__this, ___x, ___y, method)
