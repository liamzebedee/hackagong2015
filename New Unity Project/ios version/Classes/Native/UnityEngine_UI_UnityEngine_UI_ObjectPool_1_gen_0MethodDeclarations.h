#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1812;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1814;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11229_gshared (ObjectPool_1_t1812 * __this, UnityAction_1_t1814 * ___actionOnGet, UnityAction_1_t1814 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m11229(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1812 *, UnityAction_1_t1814 *, UnityAction_1_t1814 *, const MethodInfo*))ObjectPool_1__ctor_m11229_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11231_gshared (ObjectPool_1_t1812 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m11231(__this, method) (( int32_t (*) (ObjectPool_1_t1812 *, const MethodInfo*))ObjectPool_1_get_countAll_m11231_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11233_gshared (ObjectPool_1_t1812 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m11233(__this, ___value, method) (( void (*) (ObjectPool_1_t1812 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11233_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m11235_gshared (ObjectPool_1_t1812 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m11235(__this, method) (( int32_t (*) (ObjectPool_1_t1812 *, const MethodInfo*))ObjectPool_1_get_countActive_m11235_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m11237_gshared (ObjectPool_1_t1812 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m11237(__this, method) (( int32_t (*) (ObjectPool_1_t1812 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11237_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11239_gshared (ObjectPool_1_t1812 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m11239(__this, method) (( Object_t * (*) (ObjectPool_1_t1812 *, const MethodInfo*))ObjectPool_1_Get_m11239_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11241_gshared (ObjectPool_1_t1812 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m11241(__this, ___element, method) (( void (*) (ObjectPool_1_t1812 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m11241_gshared)(__this, ___element, method)
