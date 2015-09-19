#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t1254;
// System.IO.Stream
struct Stream_t804;
// System.Text.Encoding
struct Encoding_t111;
// System.Char[]
struct CharU5BU5D_t239;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamReader__ctor_m7866 (UnexceptionalStreamReader_t1254 * __this, Stream_t804 * ___stream, Encoding_t111 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern "C" void UnexceptionalStreamReader__cctor_m7867 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern "C" int32_t UnexceptionalStreamReader_Peek_m7868 (UnexceptionalStreamReader_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern "C" int32_t UnexceptionalStreamReader_Read_m7869 (UnexceptionalStreamReader_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnexceptionalStreamReader_Read_m7870 (UnexceptionalStreamReader_t1254 * __this, CharU5BU5D_t239* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m7871 (UnexceptionalStreamReader_t1254 * __this, uint16_t ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m7872 (UnexceptionalStreamReader_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m7873 (UnexceptionalStreamReader_t1254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
