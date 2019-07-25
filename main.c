#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>

int
main(int argc, char **argv)
{
   char str1[20];
   char str2[20];
   int result;
   int resul;

   //Assigning the value to the string str1
   strcpy(str1, "hello");

   //Assigning the value to the string str2
   strcpy(str2, "hEllo");

   result = strcmp(str1, str2);
   resul = ft_strcmp(str1, str2);

printf("%d\n", result);
printf("%d\n", resul);
    return 0;
}