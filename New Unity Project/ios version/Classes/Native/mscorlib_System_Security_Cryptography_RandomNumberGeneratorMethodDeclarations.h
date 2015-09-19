#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t690;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C" void RandomNumberGenerator__ctor_m9261 (RandomNumberGenerator_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" RandomNumberGenerator_t690 * RandomNumberGenerator_Create_m3739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C" RandomNumberGenerator_t690 * RandomNumberGenerator_Create_m9262 (Object_t * __this /* static, unused */, String_t* ___rngName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
