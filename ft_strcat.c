#include "includes/libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    ft_strcpy(s1+strlen(s1), s2);
    return s1;
    
}