#include "includes/libft.h"

int main(int argc, char *argv[])
{
        int n = 0;
        char *s1 = "";
        char *s2 = "";
        printf("%d\n", strncmp(s1, s2, n));
        printf("%d\n\n", ft_strncmp(s1, s2, n));

        printf("%d\n", strcmp(s1, s2));
        printf("%d\n", ft_strcmp(s1, s2));
        return(0);
}
