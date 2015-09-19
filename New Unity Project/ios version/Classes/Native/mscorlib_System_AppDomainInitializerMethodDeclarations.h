#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomainInitializer
struct AppDomainInitializer_t1615;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t82;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m10683 (AppDomainInitializer_t1615 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m10684 (AppDomainInitializer_t1615 * __this, StringU5BU5D_t82* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1615(Il2CppObject* delegate, StringU5BU5D_t82* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m10685 (AppDomainInitializer_t1615 * __this, StringU5BU5D_t82* ___args, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m10686 (AppDomainInitializer_t1615 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
