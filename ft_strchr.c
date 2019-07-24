#include "includes/libft.h"

char *ft_strchr(const char *s, int c)
{
    char *ptr;
    ptr = (char *)s;

    while(*ptr != '\0')
    {                   
        if (*ptr == c) 
            return ptr;
        ptr++;
    }
    if (c == '\0') 
        return ptr;
    return NULL;
}