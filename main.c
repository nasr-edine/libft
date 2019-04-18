#include "includes/libft.h"
#define D_ERROR { printf("Error"); }

int main(int argc, char *argv[])
{
    // int c = -1569325058;
    // char *s =NULL;
    // size_t n = strlen(s);

    // printf("[%s]\n", (char *)ft_memchr((void *)s, c, n));
    // printf("[%p]\n\n", ft_memchr((void *)s, c, n));

    // printf("[%s]\n", (char *)memchr((void *)s, c, n));
    // printf("[%p]\n", memchr((void *)s, c, n));

        char    tab[11] = "Hello boys\0";
        char    tab2[11] = "Hello boys\0";
        char    cpy[6] = "olleh\0";

        if (memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
                D_ERROR
        memcpy(tab, "Hello", 5);
        memccpy(tab2, cpy, 'o', sizeof(cpy));
        memccpy(tab, cpy, 'o', sizeof(cpy));
        if (memchr(tab, 'y', sizeof(tab)) != ft_memchr(tab, 'y', sizeof(tab)))
                D_ERROR
        printf("[%s]\n", (char *)ft_memchr(tab, 'y', sizeof(tab)));
        printf("[%s]\n", (char *)memchr(tab, 'y', sizeof(tab)));
        
         memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
         memccpy(tab + 1, cpy, 7, sizeof(cpy));
         if (memchr(tab, 'h', sizeof(tab)) != ft_memchr(tab, 'h', sizeof(tab)))
                 D_ERROR
        
        printf("[%s]\n", (char *)ft_memchr(tab, 'h', sizeof(tab)));
        printf("[%s]\n", (char *)memchr(tab, 'h', sizeof(tab)));
        // return (1);

    return(0);
}
