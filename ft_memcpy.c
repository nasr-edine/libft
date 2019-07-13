#include "includes/libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{
    if (dst == NULL && src == NULL) {
        return dst;
    }
    size_t i;
     unsigned char  *s1;
     unsigned char  *s2;

    i = 0;
    s1 = ( unsigned char *)src;
    s2 = ( unsigned char *)dst;
    while(i < n)
    {
        s2[i] = s1[i];
        i++;
    }
    return s2;  

}