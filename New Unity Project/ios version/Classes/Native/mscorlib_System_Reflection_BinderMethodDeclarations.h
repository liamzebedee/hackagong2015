#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t667;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t675;
// System.Globalization.CultureInfo
struct CultureInfo_t669;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t674;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1719;

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8204 (Binder_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8205 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t667 * Binder_get_DefaultBinder_m8206 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8207 (Object_t * __this /* static, unused */, Binder_t667 * ___binder, ObjectU5BU5D_t78* ___args, ParameterInfoU5BU5D_t675* ___pinfo, CultureInfo_t669 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8208 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t674 * Binder_FindMostDerivedMatch_m8209 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1719* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
