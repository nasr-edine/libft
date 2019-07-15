#include "includes/libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    int i;
    int length;

    length = ft_strlen(s1);
    copy = (char *)malloc(sizeof(char) * (length+1));
    if (copy == NULL) 
        return NULL;
    i = 0;
    while(i < length)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = 0;
    return copy;
}

