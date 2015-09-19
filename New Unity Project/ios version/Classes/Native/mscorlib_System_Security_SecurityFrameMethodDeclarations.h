#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1559;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t1059;
// System.AppDomain
struct AppDomain_t650;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t724;
// System.Security.SecurityFrame
#include "mscorlib_System_Security_SecurityFrame.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m9478 (SecurityFrame_t1560 * __this, RuntimeSecurityFrame_t1559 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m9479 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m9480 (SecurityFrame_t1560 * __this, RuntimeSecurityFrame_t1559 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t1059 * SecurityFrame_get_Assembly_m9481 (SecurityFrame_t1560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t650 * SecurityFrame_get_Domain_m9482 (SecurityFrame_t1560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m9483 (SecurityFrame_t1560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t724 * SecurityFrame_GetStack_m9484 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
