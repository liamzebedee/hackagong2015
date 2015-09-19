#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10926_gshared (InternalEnumerator_1_t1784 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10926(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1784 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10926_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10927_gshared (InternalEnumerator_1_t1784 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10927(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1784 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10927_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10928_gshared (InternalEnumerator_1_t1784 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10928(__this, method) (( void (*) (InternalEnumerator_1_t1784 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10928_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10929_gshared (InternalEnumerator_1_t1784 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10929(__this, method) (( bool (*) (InternalEnumerator_1_t1784 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10929_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m10930_gshared (InternalEnumerator_1_t1784 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10930(__this, method) (( double (*) (InternalEnumerator_1_t1784 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10930_gshared)(__this, method)
