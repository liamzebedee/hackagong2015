#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t74;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" Delegate_t74 * NetFxCoreExtensions_CreateDelegate_m3580 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m3581 (Object_t * __this /* static, unused */, Delegate_t74 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
