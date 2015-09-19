#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2349;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17546_gshared (DefaultComparer_t2349 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17546(__this, method) (( void (*) (DefaultComparer_t2349 *, const MethodInfo*))DefaultComparer__ctor_m17546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17547_gshared (DefaultComparer_t2349 * __this, Guid_t1647  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17547(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2349 *, Guid_t1647 , const MethodInfo*))DefaultComparer_GetHashCode_m17547_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17548_gshared (DefaultComparer_t2349 * __this, Guid_t1647  ___x, Guid_t1647  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17548(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2349 *, Guid_t1647 , Guid_t1647 , const MethodInfo*))DefaultComparer_Equals_m17548_gshared)(__this, ___x, ___y, method)
