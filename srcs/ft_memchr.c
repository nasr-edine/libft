#include "../includes/libft.h"
 
void * ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const char *str;

    str = (const char *)s;
    // if(c == '\0')
    // {
    //     while(s[i] != '\0')
    //     {
    //         i++;
    //     }
    //     return (void *)&s[i];
    // }

    while(i < n)
    {
        if(c == str[i])
        {
            return (void *)&str[i];
        }
        i++;
    }
    return NULL;
}