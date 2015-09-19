#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t1521;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t842;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C" void RSAPKCS1SignatureFormatter__ctor_m9257 (RSAPKCS1SignatureFormatter_t1521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t67* RSAPKCS1SignatureFormatter_CreateSignature_m9258 (RSAPKCS1SignatureFormatter_t1521 * __this, ByteU5BU5D_t67* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m9259 (RSAPKCS1SignatureFormatter_t1521 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureFormatter_SetKey_m9260 (RSAPKCS1SignatureFormatter_t1521 * __this, AsymmetricAlgorithm_t842 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
