#include "includes/libft.h"
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    if (dst == NULL && src == NULL) 
        return dst;
    size_t i = 0;
        
    char *s1 = (char *)src;
    char *s2 = (char *)dst;

    while(i < len)
    {
        if (src < dst && src+len > dst) 
            s2[len-i-1] = s1[len-i-1];
        else if (src > dst && src+len < dst) 
            s1[len-i-1] = s2[len-i-1];
            else
                s2[i] = s1[i]; 
        i++;
    }   
    return dst;  
}