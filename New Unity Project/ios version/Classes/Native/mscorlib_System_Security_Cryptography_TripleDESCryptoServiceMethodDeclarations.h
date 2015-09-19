#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1539;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t704;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m9381 (TripleDESCryptoServiceProvider_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m9382 (TripleDESCryptoServiceProvider_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m9383 (TripleDESCryptoServiceProvider_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m9384 (TripleDESCryptoServiceProvider_t1539 * __this, ByteU5BU5D_t67* ___rgbKey, ByteU5BU5D_t67* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m9385 (TripleDESCryptoServiceProvider_t1539 * __this, ByteU5BU5D_t67* ___rgbKey, ByteU5BU5D_t67* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
