
#include "../includes/libft.h"

void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    return memccpy(dst, src, c, n);
}