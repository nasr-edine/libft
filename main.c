#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{

   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("%d str2 is less than str1\n", ret);
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

      int reta = ft_memcmp(str1, str2, 5);

   if(reta > 0) {
      printf("%d str2 is less than str1", reta);
   } else if(reta < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
    return 0;
}

// memmove can be |very useful......
// memmove can be very very u......
// memmove can be |very useful......

// very useful......
// useful......

	// SANDBOX_RAISE(
	// 		int		size = 128 * 1024 * 1024;
	// 		char	*dst = (char *)malloc(sizeof(char) * size);
	// 		char	*data = (char *)malloc(sizeof(char) * size);

	// 		memset(data, 'A', size);

	// 		if (!dst)
	// 			exit(TEST_INVISIBLE);
	// 		ft_memmove(dst, data, size);
	// 		exit(TEST_SUCCESS);
	// 		);