#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17268_gshared (InternalEnumerator_1_t2306 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17268(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2306 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17268_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17269_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17269(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2306 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17269_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17270_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17270(__this, method) (( void (*) (InternalEnumerator_1_t2306 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17270_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17271_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17271(__this, method) (( bool (*) (InternalEnumerator_1_t2306 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17271_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1184  InternalEnumerator_1_get_Current_m17272_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17272(__this, method) (( Slot_t1184  (*) (InternalEnumerator_1_t2306 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17272_gshared)(__this, method)
