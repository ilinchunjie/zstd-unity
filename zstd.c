
#include <stdint.h>
#include "zstd.h"

#if defined(_WIN32)
#define ZSTD_EXPORT __declspec(dllexport)
#else
#define ZSTD_EXPORT extern 
#endif

ZSTD_EXPORT int32_t decompress(uint8_t *dst, int32_t dstSize, const uint8_t *src, int32_t srcSize)
{
  size_t result = ZSTD_decompress(dst, dstSize, src, srcSize);
  return ZSTD_isError(result);
}

ZSTD_EXPORT int32_t compress(uint8_t *dst, int32_t dstSize, const uint8_t *src, int32_t srcSize, int32_t compressLevel)
{
  size_t result = ZSTD_compress(dst, dstSize, src, srcSize, compressLevel);
  if(!ZSTD_isError(result)){
    return result;
  }
  return -1;
}