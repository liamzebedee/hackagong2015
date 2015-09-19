#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1451;
// System.Collections.ArrayList
struct ArrayList_t724;
// System.Collections.Hashtable
struct Hashtable_t789;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m8840 (ChannelData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t724 * ChannelData_get_ServerProviders_m8841 (ChannelData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t724 * ChannelData_get_ClientProviders_m8842 (ChannelData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t789 * ChannelData_get_CustomProperties_m8843 (ChannelData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m8844 (ChannelData_t1451 * __this, ChannelData_t1451 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
