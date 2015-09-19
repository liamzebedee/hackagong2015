#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1395;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C" void LeaseManager__ctor_m8575 (LeaseManager_t1395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C" void LeaseManager_SetPollTime_m8576 (LeaseManager_t1395 * __this, TimeSpan_t959  ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
