#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t777;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t825  : public Exception_t108
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t777 * ___alert_11;
};
