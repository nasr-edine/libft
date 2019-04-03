#include "../includes/libft.h"

char *ft_strchr(char *str, int c)
{
    size_t i;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return(&str[i]);
        i++;
    }
    return NULL;
}