#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t1245;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t108;
// System.Threading.WaitHandle
struct WaitHandle_t855;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m7765 (StreamAsyncResult_t1245 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m7766 (StreamAsyncResult_t1245 * __this, Exception_t108 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m7767 (StreamAsyncResult_t1245 * __this, Exception_t108 * ___e, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m7768 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t855 * StreamAsyncResult_get_AsyncWaitHandle_m7769 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C" bool StreamAsyncResult_get_IsCompleted_m7770 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t108 * StreamAsyncResult_get_Exception_m7771 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m7772 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m7773 (StreamAsyncResult_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m7774 (StreamAsyncResult_t1245 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
