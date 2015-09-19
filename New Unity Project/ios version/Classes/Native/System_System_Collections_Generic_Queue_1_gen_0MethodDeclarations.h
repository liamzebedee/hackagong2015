#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2251;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1838;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m16823_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1__ctor_m16823(__this, method) (( void (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1__ctor_m16823_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m16824_gshared (Queue_1_t2251 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m16824(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2251 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m16824_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m16825_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m16825(__this, method) (( bool (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m16825_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m16826_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m16826(__this, method) (( Object_t * (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m16826_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16827_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16827(__this, method) (( Object_t* (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16827_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m16828_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m16828(__this, method) (( Object_t * (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m16828_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m16829_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_Clear_m16829(__this, method) (( void (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_Clear_m16829_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m16830_gshared (Queue_1_t2251 * __this, ObjectU5BU5D_t78* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m16830(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2251 *, ObjectU5BU5D_t78*, int32_t, const MethodInfo*))Queue_1_CopyTo_m16830_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m16831_gshared (Queue_1_t2251 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m16831(__this, ___item, method) (( void (*) (Queue_1_t2251 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m16831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m16832_gshared (Queue_1_t2251 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m16832(__this, ___new_size, method) (( void (*) (Queue_1_t2251 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m16832_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m16833_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m16833(__this, method) (( int32_t (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_get_Count_m16833_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2252  Queue_1_GetEnumerator_m16834_gshared (Queue_1_t2251 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m16834(__this, method) (( Enumerator_t2252  (*) (Queue_1_t2251 *, const MethodInfo*))Queue_1_GetEnumerator_m16834_gshared)(__this, method)
