#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    
    const char *str1;
    const char *str2;

    str1 = (const char *)s1;
    str2 = (const char *)s2;

    i = 0;
    if(n == 0)
        return 0;
    while(i < n) 
    {
        if(str1[i] != str2[i])
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        i++;
    }
    i--;
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}