#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t937;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1382;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t1099  : public Identity_t1435
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t937 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t1382 * ____context_9;
};
