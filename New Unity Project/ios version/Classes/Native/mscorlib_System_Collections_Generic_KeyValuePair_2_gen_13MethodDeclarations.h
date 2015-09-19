#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m16937_gshared (KeyValuePair_2_t2257 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m16937(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2257 *, Object_t *, bool, const MethodInfo*))KeyValuePair_2__ctor_m16937_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m16938_gshared (KeyValuePair_2_t2257 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m16938(__this, method) (( Object_t * (*) (KeyValuePair_2_t2257 *, const MethodInfo*))KeyValuePair_2_get_Key_m16938_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m16939_gshared (KeyValuePair_2_t2257 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m16939(__this, ___value, method) (( void (*) (KeyValuePair_2_t2257 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m16939_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" bool KeyValuePair_2_get_Value_m16940_gshared (KeyValuePair_2_t2257 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m16940(__this, method) (( bool (*) (KeyValuePair_2_t2257 *, const MethodInfo*))KeyValuePair_2_get_Value_m16940_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m16941_gshared (KeyValuePair_2_t2257 * __this, bool ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m16941(__this, ___value, method) (( void (*) (KeyValuePair_2_t2257 *, bool, const MethodInfo*))KeyValuePair_2_set_Value_m16941_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m16942_gshared (KeyValuePair_2_t2257 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m16942(__this, method) (( String_t* (*) (KeyValuePair_2_t2257 *, const MethodInfo*))KeyValuePair_2_ToString_m16942_gshared)(__this, method)
