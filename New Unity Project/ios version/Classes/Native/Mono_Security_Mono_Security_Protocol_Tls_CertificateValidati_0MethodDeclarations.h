#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t817;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t814;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t748;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m4616 (CertificateValidationCallback2_t817 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t814 * CertificateValidationCallback2_Invoke_m4617 (CertificateValidationCallback2_t817 * __this, X509CertificateCollection_t748 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t814 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t817(Il2CppObject* delegate, X509CertificateCollection_t748 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m4618 (CertificateValidationCallback2_t817 * __this, X509CertificateCollection_t748 * ___collection, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t814 * CertificateValidationCallback2_EndInvoke_m4619 (CertificateValidationCallback2_t817 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
