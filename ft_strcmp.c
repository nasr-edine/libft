#include "includes/libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    size_t max = (strlen(s1) < strlen(s2)) ? strlen(s2) : strlen(s1);
    return ft_memcmp((const void *)s1, (const void *)s2, max);
    // return 0;
}