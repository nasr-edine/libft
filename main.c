#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    // ft_strncpy(s, "toto", 4);
    char chararray[10];
    char chararraya[10];

    strncpy(chararray, "", 3);

    int i = 0;
    while(i < 10)
    {
        printf("%d ", chararray[i]);
        i++;
    }
    puts("");
        ft_strncpy(chararraya, "", 3);

         i = 0;
    while(i < 10)
    {
        printf("%d ", chararraya[i]);
        i++;
    }
    return 0;
}