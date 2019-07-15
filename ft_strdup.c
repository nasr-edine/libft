#include "includes/libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;

    len = ft_strlen(s1);
    copy = (char *)malloc(sizeof(char) * (len+1));
    if (copy == NULL) 
        return NULL;
    copy[len] = 0;
    ft_memcpy(copy, s1, len);
    return copy;
}