#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17386_gshared (InternalEnumerator_1_t2330 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17386(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2330 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17386_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17387_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17387(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2330 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17387_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17388_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17388(__this, method) (( void (*) (InternalEnumerator_1_t2330 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17388_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17389_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17389(__this, method) (( bool (*) (InternalEnumerator_1_t2330 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17389_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t959  InternalEnumerator_1_get_Current_m17390_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17390(__this, method) (( TimeSpan_t959  (*) (InternalEnumerator_1_t2330 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17390_gshared)(__this, method)
