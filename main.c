#include "includes/libft.h"

int main()
{
//     printf("size: %zu\n", ft_strlen(""));
//     printf("size: %zu\n", ft_strnlen("abc", -1));
//     printf("size: %zu\n", strnlen("abc", -1));
    
//       char str[] = "almost every programmer should know memset!";
//       char str2[] = "almost every programmer should know memset!";
//   memset (str,'-',6);
//     puts (str);

//   ft_memset (str2,'-',6);
//   puts (str);


// bzero( str, strlen(str) );
//     puts (str);

    // char s1[] = "test";
    // char s2[] = "toto";
    // char *s3;
    // // puts("test");
    // // printf("size: %zu\n", ft_strlen(""));
    // s3 = ft_memcpy(s2, s1, strlen(s1));
    // puts(s3);

    // memset(NULL, 'a', 12);
    //  void *f = memcpy(NULL, NULL, 3);
    //          puts((char *)f);

    void *g = ft_memcpy(NULL, NULL, 3);
    // // void *f = memset(NULL, 'a', 12);
    puts((char *)g);

    // void *g = ft_memset(NULL, 'a', 12);
    return 0;
}
