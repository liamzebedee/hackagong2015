#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UnhandledExceptionHandler
struct UnhandledExceptionHandler_t431;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t633;
// System.String
struct String_t;
// System.Exception
struct Exception_t108;

// System.Void UnityEngine.UnhandledExceptionHandler::.ctor()
extern "C" void UnhandledExceptionHandler__ctor_m2467 (UnhandledExceptionHandler_t431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C" void UnhandledExceptionHandler_RegisterUECatcher_m2468 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionHandler_HandleUnhandledException_m2469 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t633 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C" void UnhandledExceptionHandler_PrintException_m2470 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t108 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C" void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
