#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t772;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C" void HMAC__ctor_m4121 (HMAC_t772 * __this, String_t* ___hashName, ByteU5BU5D_t67* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t67* HMAC_get_Key_m4122 (HMAC_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m4123 (HMAC_t772 * __this, ByteU5BU5D_t67* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m4124 (HMAC_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t67* HMAC_HashFinal_m4125 (HMAC_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m4126 (HMAC_t772 * __this, ByteU5BU5D_t67* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C" void HMAC_initializePad_m4127 (HMAC_t772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
