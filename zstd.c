
#include <stdint.h>
#include "zstd.h"

#if defined(_WIN32)
#define ZSTD_EXPORT __declspec(dllexport)
#else
#define ZSTD_EXPORT extern 
#endif

ZSTD_EXPORT size_t __stdcall decompress(uint8_t *dst, int32_t dstSize, const uint8_t *src, int32_t srcSize)
{
  size_t decSize = ZSTD_decompress(dst, dstSize, src, srcSize);
  if(!ZSTD_isError(decSize)){
    return decSize;
  }
  return 0;
}

ZSTD_EXPORT size_t __stdcall compress(uint8_t *dst, int32_t dstSize, const uint8_t *src, int32_t srcSize, int32_t compressLevel)
{
  size_t cSize = ZSTD_compress(dst, dstSize, src, srcSize, compressLevel);
  if(!ZSTD_isError(cSize)){
    return cSize;
  }
  return 0;
}