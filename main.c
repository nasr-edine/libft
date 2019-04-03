#include "includes/libft.h"

int main(int argc, char *argv[])
{
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "a\203");
    strcpy(str2, "a\003");
//printf("%s\n", str1);
   ret = strcmp(str1, str2);
printf("%d\n", ret);
   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }

    ret = ft_strcmp(str1, str2);
printf("\n%d\n", ret);

printf("\n");
   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }

    return(0);
}
