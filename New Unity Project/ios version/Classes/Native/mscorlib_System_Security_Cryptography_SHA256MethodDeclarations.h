#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA256
struct SHA256_t867;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.SHA256::.ctor()
extern "C" void SHA256__ctor_m9307 (SHA256_t867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
extern "C" SHA256_t867 * SHA256_Create_m4677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create(System.String)
extern "C" SHA256_t867 * SHA256_Create_m9308 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
