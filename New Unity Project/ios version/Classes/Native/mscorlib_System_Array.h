#pragma once
#include <stdint.h>
struct Il2CppArrayBounds;
// System.Object
#include "mscorlib_System_Object.h"
// System.Array
struct  Array_t  : public Object_t
{
	Il2CppArrayBounds* bounds;
	il2cpp_array_size_t max_length;
};
