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
    int b;

    int c = -128;

    while(c < 127)
    {
        a = isalnum(c);
        b = ft_isalnum(c);
        assert(a == b);
        printf("[%c %d %d]\n", c, a, b);
        c++;
    }

    return 0;
}