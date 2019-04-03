#include "includes/libft.h"

int main(int argc, char *argv[])
{
    char s[20];

    strcpy(s, "a");
    printf("%s\n", s);
    
    printf("size string: %zu\n", ft_strlen(argv[1]));

    printf("position de %c : %s\n", 'c', strchr(argv[1], 'c'));
    printf("position de %c : %s\n", 'c', ft_strchr(argv[1], 'c'));

    return(0);
}