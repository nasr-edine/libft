#include "includes/libft.h"

char *ft_strndup(const char *s1, size_t n)
{
    char *copy;
    size_t len;
    
    if (s1 == NULL) 
        return NULL;
    len = ft_strnlen(s1, n);
    copy = (char *)malloc(sizeof(char) * (len + 1));
    copy[len] = '\0';
    return ft_memcpy(copy, s1, len);
}
