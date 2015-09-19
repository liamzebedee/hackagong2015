#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t650;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t651;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1059;
// System.Security.Policy.Evidence
struct Evidence_t1292;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1382;
// System.Object
struct Object_t;

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m3592 (AppDomain_t650 * __this, UnhandledExceptionEventHandler_t651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m9847 (AppDomain_t650 * __this, UnhandledExceptionEventHandler_t651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m9848 (AppDomain_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t650 * AppDomain_getCurDomain_m9849 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t650 * AppDomain_get_CurrentDomain_m3590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1059 * AppDomain_LoadAssembly_m9850 (AppDomain_t650 * __this, String_t* ___assemblyRef, Evidence_t1292 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1059 * AppDomain_Load_m9851 (AppDomain_t650 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1059 * AppDomain_Load_m9852 (AppDomain_t650 * __this, String_t* ___assemblyString, Evidence_t1292 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1382 * AppDomain_InternalSetContext_m9853 (Object_t * __this /* static, unused */, Context_t1382 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1382 * AppDomain_InternalGetContext_m9854 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1382 * AppDomain_InternalGetDefaultContext_m9855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m9856 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m9857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m9858 (AppDomain_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t1059 * AppDomain_DoTypeResolve_m9859 (AppDomain_t650 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
