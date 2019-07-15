#include "includes/libft.h"

char *ft_strndup(const char *s1, size_t n)
{
    char *copy;
    size_t len;
    
    len = ft_strnlen(s1, n);
    copy = (char *)malloc(sizeof(char) * (len + 1));
    if (copy == NULL) 
        return NULL;
    copy[len] = '\0';
    return ft_memcpy(copy, s1, len);
}
