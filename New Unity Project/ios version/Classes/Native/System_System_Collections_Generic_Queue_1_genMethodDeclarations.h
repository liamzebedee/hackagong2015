#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t58;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2360;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Int32[]
struct Int32U5BU5D_t107;
// System.Collections.Generic.Queue`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m539_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1__ctor_m539(__this, method) (( void (*) (Queue_1_t58 *, const MethodInfo*))Queue_1__ctor_m539_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m11551_gshared (Queue_1_t58 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m11551(__this, ___array, ___idx, method) (( void (*) (Queue_1_t58 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m11551_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m11552_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m11552(__this, method) (( bool (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m11552_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m11553_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m11553(__this, method) (( Object_t * (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m11553_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11554_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11554(__this, method) (( Object_t* (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11554_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m11555_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m11555(__this, method) (( Object_t * (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m11555_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m550_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_Clear_m550(__this, method) (( void (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_Clear_m550_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m549_gshared (Queue_1_t58 * __this, Int32U5BU5D_t107* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m549(__this, ___array, ___idx, method) (( void (*) (Queue_1_t58 *, Int32U5BU5D_t107*, int32_t, const MethodInfo*))Queue_1_CopyTo_m549_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m552_gshared (Queue_1_t58 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m552(__this, ___item, method) (( void (*) (Queue_1_t58 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m11556_gshared (Queue_1_t58 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m11556(__this, ___new_size, method) (( void (*) (Queue_1_t58 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m11556_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m11557_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m11557(__this, method) (( int32_t (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_get_Count_m11557_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1841  Queue_1_GetEnumerator_m11558_gshared (Queue_1_t58 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m11558(__this, method) (( Enumerator_t1841  (*) (Queue_1_t58 *, const MethodInfo*))Queue_1_GetEnumerator_m11558_gshared)(__this, method)
