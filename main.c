#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>

int
main(int argc, char **argv)
{
	// char *t;
	char *u;


	// t = ft_strstr("123", "");
	// u = strstr("",  "");


			char	*s1 = "MZIRIBMZIRIBMZP";
			char	*s2 = "MZIRIBMZP";

			// char	*i1 = strstr(s1, s2);
			// char	*i2 = ft_strstr(s1, s2);			
			char *t = "";
			char	*i1 = strstr(t, "");
			char	*i2 = ft_strstr("", "");
			if (i1 == i2)
				puts("ok");
			else
			puts("ko");




	puts(i1);
	puts(i2);

	printf("%p\n", t);
	printf("%p\n", i1);
    return 0;
}