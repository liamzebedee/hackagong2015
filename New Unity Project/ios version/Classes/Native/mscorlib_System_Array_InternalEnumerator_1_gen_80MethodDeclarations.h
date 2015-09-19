#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17273_gshared (InternalEnumerator_1_t2307 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17273(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2307 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17273_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17274_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17274(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2307 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17274_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17275_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17275(__this, method) (( void (*) (InternalEnumerator_1_t2307 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17275_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17276_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17276(__this, method) (( bool (*) (InternalEnumerator_1_t2307 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17276_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1191  InternalEnumerator_1_get_Current_m17277_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17277(__this, method) (( Slot_t1191  (*) (InternalEnumerator_1_t2307 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17277_gshared)(__this, method)
