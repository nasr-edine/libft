#include "includes/libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)
{
    size_t n = ft_strnlen(src, len);
    ft_bzero(dst+n, len - n);
    return ft_memcpy(dst, src, n);
}