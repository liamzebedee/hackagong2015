#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StackTraceUtility
struct StackTraceUtility_t607;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Diagnostics.StackTrace
struct StackTrace_t646;

// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m3500 (StackTraceUtility_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C" void StackTraceUtility__cctor_m3501 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C" void StackTraceUtility_SetProjectFolder_m3502 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3503 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3504 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3505 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3506 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3507 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3508 (Object_t * __this /* static, unused */, StackTrace_t646 * ___stackTrace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
