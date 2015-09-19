#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1368;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1407;
// System.String
struct String_t;

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m8471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m8472 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t78* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern "C" ConstructionCall_t1407 * ActivationServices_CreateConstructionCall_m8473 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t78* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m8474 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
extern "C" void ActivationServices_EnableProxyActivation_m8475 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
