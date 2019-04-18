#include "../includes/libft.h"
 
char * ft_strrchr(const char *s, int c)
{
    int i;
    i = strlen(s);

    if(c == '\0')
        return (char *)&s[i];
    while(i >= 0)
    {
        if(s[i] == c)
        {
            return (char *)&s[i];
        }
        i--;
    }
    return NULL;
}