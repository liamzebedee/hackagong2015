#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t1170;
// System.Char[]
struct CharU5BU5D_t239;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m7824 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C" void TextReader__cctor_m7825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C" void TextReader_Dispose_m7826 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m7827 (TextReader_t1170 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C" int32_t TextReader_Peek_m7828 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m7829 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TextReader_Read_m7830 (TextReader_t1170 * __this, CharU5BU5D_t239* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C" String_t* TextReader_ReadLine_m7831 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C" String_t* TextReader_ReadToEnd_m7832 (TextReader_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C" TextReader_t1170 * TextReader_Synchronized_m7833 (Object_t * __this /* static, unused */, TextReader_t1170 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
