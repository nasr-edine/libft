#include "includes/libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i = 0;

    char *str;

    str = s;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}