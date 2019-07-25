#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>

int
main(int argc, char **argv)
{
	char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s1, max);
	char *i2 = ft_strnstr(s1, s1, max);
			if (i1 == i2)
				puts("TEST_SUCCESS");
	

	puts(i1);
	puts(i2);

	// printf("%p\n", t);
	// printf("%p\n", i1);
    return 0;
}