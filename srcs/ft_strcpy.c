#include "../includes/libft.h"

//char *strcpy(char *dest, const char *src)

char *ft_strcpy(char *dest, char *src)
{
    int i;
    // if(src == NULL)
    //     return NULL;
    dest = (char *) malloc(strlen(src) * sizeof(char));
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}