#include "includes/libft.h"

int main(int argc, char *argv[])
{
        int n = 7;
        char *s1 = "abc\0f";
        char *s2 = "abc\0e";
        //printf("%d\n", bcmp(s1, s2, n));
        printf("%d\n\n", memcmp(s1, s2, n));
        printf("%d\n\n", ft_memcmp(s1, s2, n));

        // printf("%d\n", strcmp(s1, s2));
        // printf("%d\n", ft_strcmp(s1, s2));
        return(0);
}
