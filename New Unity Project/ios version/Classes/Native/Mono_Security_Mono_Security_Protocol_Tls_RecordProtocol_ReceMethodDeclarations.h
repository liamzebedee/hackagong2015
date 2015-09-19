#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t802;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.IO.Stream
struct Stream_t804;
// System.Exception
struct Exception_t108;
// System.Threading.WaitHandle
struct WaitHandle_t855;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4299 (ReceiveRecordAsyncResult_t802 * __this, AsyncCallback_t9 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t67* ___initialBuffer, Stream_t804 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t804 * ReceiveRecordAsyncResult_get_Record_m4300 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t67* ReceiveRecordAsyncResult_get_ResultingBuffer_m4301 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t67* ReceiveRecordAsyncResult_get_InitialBuffer_m4302 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4303 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t108 * ReceiveRecordAsyncResult_get_AsyncException_m4304 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4305 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t855 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4306 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4307 (ReceiveRecordAsyncResult_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4308 (ReceiveRecordAsyncResult_t802 * __this, Exception_t108 * ___ex, ByteU5BU5D_t67* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4309 (ReceiveRecordAsyncResult_t802 * __this, Exception_t108 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4310 (ReceiveRecordAsyncResult_t802 * __this, ByteU5BU5D_t67* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
