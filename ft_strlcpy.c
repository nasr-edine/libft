#include "includes/libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
//     puts(dst);
//     puts(src);

    size_t i = 0;
    size_t len = dstsize;    
    
    if (dstsize == 0) 
    {
        len = 0;
    }
    else
    if (dstsize <= strlen(src)) 
        len = dstsize -1;
    
    while(i < len )
    {
        dst[i] = src[i];
        i++;
    }    
    dst[i] = 0;
    return strlen(src);
}
// https://en.wikibooks.org/wiki/C_Programming/C_Reference/nonstandard/strlcpy
// https://cgit.freedesktop.org/libbsd/commit/?id=f1dd5f2e7179504bc18859f323b806a46d4a5aec
// https://gitlab.freedesktop.org/libbsd/libbsd/tree/master/src