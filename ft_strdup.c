#include "includes/libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *copy;

    int length = strlen(s1);
    copy = (char *)malloc(sizeof(char) * (length+1));
    
    if (copy == NULL) 
    {
        return NULL;
    }
    

    int i = 0;
    
    while(i < length)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = 0;
    return copy;
}

// int main(int argc, char const *argv[])
// {
//     char *dup;
//     dup =
//     ft_strdup("toto");
//     puts(dup);
//     return 0;
// }

