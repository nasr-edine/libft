#include "includes/libft.h"

int ft_atoi(const char *str)
{
    // puts(str);

    size_t i;
    int c;

    i = 0;
    while(i < strlen(str))
    {
        // puts("character:");
        // putchar(str[i]);
        // printf("character: %c\n", str[i]);
        // printf("value decimal: %d\n", str[i]);

        c = str[i] - 48;

        printf("after conversion of character: %d\n", c);
        i++;
    }
    
    return 0;
}
// 48  0 