
#include "../includes/libft.h"
//int scmp(const char *s1, const char *s2)

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    if(n > 0)
        i--;
    return( (unsigned char)s1[i] - (unsigned char)s2[i]);
}