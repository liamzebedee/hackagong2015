#pragma once
#include <stdint.h>
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t1544;
// System.String
struct String_t;
// System.Version
struct Version_t110;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.StrongName
struct  StrongName_t1549  : public Object_t
{
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t1544 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t110 * ___version_2;
};
