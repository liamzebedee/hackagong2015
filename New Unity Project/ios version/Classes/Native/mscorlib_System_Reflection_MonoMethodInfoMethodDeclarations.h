#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t675;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m8314 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1325 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1325  MonoMethodInfo_GetMethodInfo_m8315 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m8316 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetReturnType_m8317 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetAttributes_m8318 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m8319 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t675* MonoMethodInfo_get_parameter_info_m8320 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t675* MonoMethodInfo_GetParametersInfo_m8321 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
