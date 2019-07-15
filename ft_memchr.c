#include "includes/libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char  *s1;

    i = 0;
    s1 = ( unsigned char *)s;
    while(i < n)
    {
        if (s1[i] == ( unsigned char)c && i < n) 
            return &s1[i];
        i++;
    }
    return NULL;  

}