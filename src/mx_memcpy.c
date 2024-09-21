#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    if (!dst || !src || n == 0)
        return NULL;

    char *loc_dst = (char *)dst;
    const char *loc_src = (const char *)src;

    for (size_t i = 0; i < n; i++) loc_dst[i] = loc_src[i];

    return dst;
}
