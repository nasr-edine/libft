#include "includes/libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    // if (dst == NULL && src == NULL) {
    //     return dst;
    // }
    size_t i;
     unsigned char  *s1;
    //  unsigned char  *s2;

    i = 0;
    s1 = ( unsigned char *)s;
    // s2 = ( unsigned char *)dst;
    while(i < n)
    {
        // s2[i] = s1[i];
        if (s1[i] == ( unsigned char)c && i < n) 
        {
            // s1[i+1] = 0;
            return &s1[i];
        }
        // else if (s1[i] == ( unsigned char)c && i < n)
        //     return &s2[i+1];
        i++;
    }
    return NULL;  

}