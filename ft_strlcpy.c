#include "includes/libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
{
    size_t n = ft_strnlen(src, len);
    ft_bzero(dst+n, len - n);
    return ft_memcpy(dst, src, n);
}
// https://en.wikibooks.org/wiki/C_Programming/C_Reference/nonstandard/strlcpy
// https://cgit.freedesktop.org/libbsd/commit/?id=f1dd5f2e7179504bc18859f323b806a46d4a5aec
// https://gitlab.freedesktop.org/libbsd/libbsd/tree/master/src