#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t70;
// UnityEngine.Transform
struct Transform_t33;
// UnityEngine.GameObject
struct GameObject_t47;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t350;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m2891 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t33 * Component_get_transform_m283 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t47 * Component_get_gameObject_m307 (Component_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t70 * Component_GetComponent_m2402 (Component_t70 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m2892 (Component_t70 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t70 * Component_GetComponentInChildren_m2893 (Component_t70 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t70 * Component_GetComponentInParent_m2894 (Component_t70 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m2895 (Component_t70 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m2131 (Component_t70 * __this, Type_t * ___type, List_1_t350 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
