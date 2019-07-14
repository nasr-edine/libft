#include "includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    // if (dst == NULL && src == NULL) {
    //     return dst;
    // }
    size_t i;
     unsigned char  *a;
     unsigned char  *b;

    i = 0;
    a = ( unsigned char *)s1;
    b = ( unsigned char *)s2;
    while(i < n)
    {
        
        if (a[i] != b[i]) 
        {
            return a[i] - b[i];
        }
        
        // s2[i] = s1[i];
        i++;
    }
    return 0;  
}