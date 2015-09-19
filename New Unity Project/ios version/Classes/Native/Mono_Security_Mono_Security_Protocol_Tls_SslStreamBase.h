#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t803;
// System.IO.Stream
struct Stream_t804;
// System.IO.MemoryStream
struct MemoryStream_t821;
// Mono.Security.Protocol.Tls.Context
struct Context_t780;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t786;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t815  : public Stream_t804
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t804 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t821 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t780 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t786 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t803 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t67* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t821 * ___recordStream_15;
};
struct SslStreamBase_t815_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t803 * ___record_processing_2;
};
