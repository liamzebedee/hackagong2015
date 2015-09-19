#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t793;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t779;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C" void SecurityParameters__ctor_m4358 (SecurityParameters_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C" CipherSuite_t779 * SecurityParameters_get_Cipher_m4359 (SecurityParameters_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void SecurityParameters_set_Cipher_m4360 (SecurityParameters_t793 * __this, CipherSuite_t779 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C" ByteU5BU5D_t67* SecurityParameters_get_ClientWriteMAC_m4361 (SecurityParameters_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ClientWriteMAC_m4362 (SecurityParameters_t793 * __this, ByteU5BU5D_t67* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C" ByteU5BU5D_t67* SecurityParameters_get_ServerWriteMAC_m4363 (SecurityParameters_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ServerWriteMAC_m4364 (SecurityParameters_t793 * __this, ByteU5BU5D_t67* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C" void SecurityParameters_Clear_m4365 (SecurityParameters_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
