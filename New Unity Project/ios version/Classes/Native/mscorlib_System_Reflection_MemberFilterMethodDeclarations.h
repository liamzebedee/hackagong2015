#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberFilter
struct MemberFilter_t1078;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C" void MemberFilter__ctor_m10655 (MemberFilter_t1078 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C" bool MemberFilter_Invoke_m10656 (MemberFilter_t1078 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t1078(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * MemberFilter_BeginInvoke_m10657 (MemberFilter_t1078 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C" bool MemberFilter_EndInvoke_m10658 (MemberFilter_t1078 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
