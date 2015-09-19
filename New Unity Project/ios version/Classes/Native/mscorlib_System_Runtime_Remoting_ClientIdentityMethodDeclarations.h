#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1443;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1442;
// System.MarshalByRefObject
struct MarshalByRefObject_t937;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m8778 (ClientIdentity_t1443 * __this, String_t* ___objectUri, ObjRef_t1442 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t937 * ClientIdentity_get_ClientProxy_m8779 (ClientIdentity_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m8780 (ClientIdentity_t1443 * __this, MarshalByRefObject_t937 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1442 * ClientIdentity_CreateObjRef_m8781 (ClientIdentity_t1443 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m8782 (ClientIdentity_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
