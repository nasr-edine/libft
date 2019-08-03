#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>
#include <ctype.h>  

int
main(int argc, char **argv)
{
    int a;
    // putchar(a);
        // putc(a, stdout);
        printf("%d\n", a);

puts("");
    int b;
    // putchar(b);
    // putc(b, stdout);
    

 
  
  
    int i = 0;
    int c = -32768;

    while(i < 32767)
    {
        a = isalpha(c);
        b = ft_isalpha(c);
        assert(a == b);
        printf("[%c %d %d]\n", c, a, b);
        c++;
        i++;
    }

    // i = 0;
    // c = 65;

    // while(i < 100)
    // {
    //     a = isalpha(c);
    //     b = ft_isalpha(c);
    //     assert(a == b);
    //     printf("[%c %d %d]\n", c, a, b);
    //     c++;
    //     i++;
    // }
  
    return 0;
}