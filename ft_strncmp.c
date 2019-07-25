#include "includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t max = (strlen(s1) < strlen(s2)) ? strlen(s2) : strlen(s1);
    max = (max < n) ? max : n;
    return ft_memcmp((const void *)s1, (const void *)s2, max);
}