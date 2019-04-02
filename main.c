#include "libft.h"

int main()
{
    char s[20];

    strcpy(s, "a");
    printf("%s\n", s);
    
    printf("size string: %zu\n", ft_strlen(s));
    return(0);
}