#include "includes/libft.h"

int ft_atoi(const char *str)
{
    // puts(str);

    size_t i;
    int c;
    int dec = 1;
    int nbr;

    i = 0;
    nbr = 0;
    size_t len = strlen(str);
    
    while(i < len - 1)
    {
        dec *= 10;
        i++;
    }
    i = 0;
    while(i < len)
    {
        c = (str[i] - 48) * dec;
        printf("c: %d\n", c);
        nbr += c;
        printf("nbr: %d\n", nbr);
        i++;
        dec /= 10;
    }
    printf("nbr: %d\n", nbr);
    return 0;
}
// 48  0 