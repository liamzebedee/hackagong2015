#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C" void DictionaryEntry__ctor_m5636 (DictionaryEntry_t1050 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C" Object_t * DictionaryEntry_get_Key_m7249 (DictionaryEntry_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C" Object_t * DictionaryEntry_get_Value_m7250 (DictionaryEntry_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
