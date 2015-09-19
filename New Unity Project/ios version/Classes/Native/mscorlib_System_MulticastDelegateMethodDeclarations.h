#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1713;
// System.Delegate
struct Delegate_t74;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6292 (MulticastDelegate_t7 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6293 (MulticastDelegate_t7 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6294 (MulticastDelegate_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1713* MulticastDelegate_GetInvocationList_m6295 (MulticastDelegate_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t74 * MulticastDelegate_CombineImpl_m6296 (MulticastDelegate_t7 * __this, Delegate_t74 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6297 (MulticastDelegate_t7 * __this, MulticastDelegate_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t7 * MulticastDelegate_KPM_m6298 (Object_t * __this /* static, unused */, MulticastDelegate_t7 * ___needle, MulticastDelegate_t7 * ___haystack, MulticastDelegate_t7 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t74 * MulticastDelegate_RemoveImpl_m6299 (MulticastDelegate_t7 * __this, Delegate_t74 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
