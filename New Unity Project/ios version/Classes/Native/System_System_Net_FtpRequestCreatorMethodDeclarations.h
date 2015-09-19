#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t923;
// System.Net.WebRequest
struct WebRequest_t886;
// System.Uri
struct Uri_t25;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4857 (FtpRequestCreator_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t886 * FtpRequestCreator_Create_m4858 (FtpRequestCreator_t923 * __this, Uri_t25 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
