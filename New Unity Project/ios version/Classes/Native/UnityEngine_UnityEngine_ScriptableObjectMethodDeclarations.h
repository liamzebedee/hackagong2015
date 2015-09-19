#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t430;
struct ScriptableObject_t430_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m2462 (ScriptableObject_t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2463 (Object_t * __this /* static, unused */, ScriptableObject_t430 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t430 * ScriptableObject_CreateInstance_m2464 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t430 * ScriptableObject_CreateInstance_m2465 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t430 * ScriptableObject_CreateInstanceFromType_m2466 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ScriptableObject_t430_marshal(const ScriptableObject_t430& unmarshaled, ScriptableObject_t430_marshaled& marshaled);
extern "C" void ScriptableObject_t430_marshal_back(const ScriptableObject_t430_marshaled& marshaled, ScriptableObject_t430& unmarshaled);
extern "C" void ScriptableObject_t430_marshal_cleanup(ScriptableObject_t430_marshaled& marshaled);
