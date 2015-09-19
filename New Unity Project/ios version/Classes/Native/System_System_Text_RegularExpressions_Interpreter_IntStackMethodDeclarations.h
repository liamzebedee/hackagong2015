#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m5337 (IntStack_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m5338 (IntStack_t1002 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m5339 (IntStack_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m5340 (IntStack_t1002 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void IntStack_t1002_marshal(const IntStack_t1002& unmarshaled, IntStack_t1002_marshaled& marshaled);
extern "C" void IntStack_t1002_marshal_back(const IntStack_t1002_marshaled& marshaled, IntStack_t1002& unmarshaled);
extern "C" void IntStack_t1002_marshal_cleanup(IntStack_t1002_marshaled& marshaled);
