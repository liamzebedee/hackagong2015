#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RC4
struct RC4_t731;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m3924 (RC4_t731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m3925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t67* RC4_get_IV_m3926 (RC4_t731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m3927 (RC4_t731 * __this, ByteU5BU5D_t67* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
