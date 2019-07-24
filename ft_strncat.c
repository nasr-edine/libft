#include "includes/libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{

    size_t i = 0;
    size_t len = strlen(s1);

    while(i < n && s2[i] != 0)
    {
        s1[len + i] = s2[i];
        i++;
    }
     s1[len + strlen(s2)] = 0;  
    return s1;
}