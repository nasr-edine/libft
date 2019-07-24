#include "includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *ptr;

    ptr = 0;
    do
    {                   
        if (*s == c) 
            ptr = (char *)s;
    }
    while(*s++);
    return ptr;
}