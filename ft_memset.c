#include "includes/libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char *s; 
    
    i = 0;
    s = (char *)b;
    while(i < len)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return s;
}