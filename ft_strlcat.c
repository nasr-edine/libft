#include "includes/libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{

    size_t i = 0;
    size_t len = strlen(src);
    size_t len_dst = strlen(dst);
    
    if (dstsize <= strlen(src) + strlen(dst)) 
    {
            if (dstsize == 0 || dstsize <= strlen(dst)) 
            {
                len =0;
                 return strlen(src) + len_dst - (len_dst - dstsize);
            }
            
            else
            {
                len = dstsize - strlen(dst) - 1;
            }   
    }
    char *ptr = dst + strlen(dst);
    while(i < len)
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = 0;
    return strlen(src) + len_dst;

}