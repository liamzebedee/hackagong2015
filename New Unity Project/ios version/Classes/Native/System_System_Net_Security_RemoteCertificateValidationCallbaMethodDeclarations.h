#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t883;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t824;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t885;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m5625 (RemoteCertificateValidationCallback_t883 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m4726 (RemoteCertificateValidationCallback_t883 * __this, Object_t * ___sender, X509Certificate_t824 * ___certificate, X509Chain_t885 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t883(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t824 * ___certificate, X509Chain_t885 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m5626 (RemoteCertificateValidationCallback_t883 * __this, Object_t * ___sender, X509Certificate_t824 * ___certificate, X509Chain_t885 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m5627 (RemoteCertificateValidationCallback_t883 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
