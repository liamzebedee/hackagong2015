#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t887;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t883;
// System.Net.ServicePoint
struct ServicePoint_t882;
// System.Uri
struct Uri_t25;
// System.Net.IWebProxy
struct IWebProxy_t921;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C" void ServicePointManager__cctor_m4926 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C" Object_t * ServicePointManager_get_CertificatePolicy_m4720 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" bool ServicePointManager_get_CheckCertificateRevocationList_m4688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C" int32_t ServicePointManager_get_SecurityProtocol_m4719 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C" RemoteCertificateValidationCallback_t883 * ServicePointManager_get_ServerCertificateValidationCallback_m4722 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C" ServicePoint_t882 * ServicePointManager_FindServicePoint_m4927 (Object_t * __this /* static, unused */, Uri_t25 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C" void ServicePointManager_RecycleServicePoints_m4928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
