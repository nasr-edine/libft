#include "includes/libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    size_t len_s1, len_s2;

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);
    s1[len_s1 + len_s2] = 0;
    ft_strcpy(s1+len_s1, s2);
    return s1;
    
}