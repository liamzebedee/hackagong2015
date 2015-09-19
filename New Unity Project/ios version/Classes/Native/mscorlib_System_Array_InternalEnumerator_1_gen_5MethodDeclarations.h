#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10984_gshared (InternalEnumerator_1_t1792 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10984(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1792 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10984_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10985_gshared (InternalEnumerator_1_t1792 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10985(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1792 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10985_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10986_gshared (InternalEnumerator_1_t1792 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10986(__this, method) (( void (*) (InternalEnumerator_1_t1792 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10986_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10987_gshared (InternalEnumerator_1_t1792 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10987(__this, method) (( bool (*) (InternalEnumerator_1_t1792 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10987_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m10988_gshared (InternalEnumerator_1_t1792 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10988(__this, method) (( float (*) (InternalEnumerator_1_t1792 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10988_gshared)(__this, method)
