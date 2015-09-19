#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1222;
// System.Text.DecoderFallback
struct DecoderFallback_t1566;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1567;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m9508 (Decoder_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m9509 (Decoder_t1222 * __this, DecoderFallback_t1566 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1567 * Decoder_get_FallbackBuffer_m9510 (Decoder_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
