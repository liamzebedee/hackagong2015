#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11037_gshared (InternalEnumerator_1_t1794 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11037(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1794 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11037_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11038_gshared (InternalEnumerator_1_t1794 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11038(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1794 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11038_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11039_gshared (InternalEnumerator_1_t1794 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11039(__this, method) (( void (*) (InternalEnumerator_1_t1794 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11039_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11040_gshared (InternalEnumerator_1_t1794 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11040(__this, method) (( bool (*) (InternalEnumerator_1_t1794 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11040_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t88  InternalEnumerator_1_get_Current_m11041_gshared (InternalEnumerator_1_t1794 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11041(__this, method) (( RaycastResult_t88  (*) (InternalEnumerator_1_t1794 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11041_gshared)(__this, method)
