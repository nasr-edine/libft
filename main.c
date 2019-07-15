#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>

int
main(int argc, char **argv)
{
   char src[50], dest[50];
   char dest2[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
   strcpy(dest2, "This is destination");

   strcat(dest, src);
   ft_strcat(dest2, src);

   printf("Final destination string : |%s|\n", dest);
   printf("Final destination string : |%s|", dest2);

return 0;
}