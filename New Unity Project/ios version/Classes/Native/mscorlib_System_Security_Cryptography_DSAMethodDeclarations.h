#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSA
struct DSA_t751;
// System.String
struct String_t;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C" void DSA__ctor_m9098 (DSA_t751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C" DSA_t751 * DSA_Create_m4656 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C" DSA_t751 * DSA_Create_m9099 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C" void DSA_ZeroizePrivateKey_m9100 (DSA_t751 * __this, DSAParameters_t854  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C" void DSA_FromXmlString_m9101 (DSA_t751 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C" String_t* DSA_ToXmlString_m9102 (DSA_t751 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
