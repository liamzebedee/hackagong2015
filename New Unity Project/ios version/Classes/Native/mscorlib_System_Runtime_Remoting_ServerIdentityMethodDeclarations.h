#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1099;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1382;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1442;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m8876 (ServerIdentity_t1099 * __this, String_t* ___objectUri, Context_t1382 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m8877 (ServerIdentity_t1099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1442 * ServerIdentity_CreateObjRef_m8878 (ServerIdentity_t1099 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
