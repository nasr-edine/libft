#include "includes/libft.h"

int main(int argc, char *argv[])
{
    int c = 'p';
    char *s ="azertyp";
    size_t n = strlen(s);

    printf("[%s]\n", (char *)ft_memchr((void *)s, c, n));
    printf("[%p]\n\n", ft_memchr((void *)s, c, n));

    printf("[%s]\n", (char *)memchr((void *)s, c, n));
    printf("[%p]\n", memchr((void *)s, c, n));

    return(0);
}
