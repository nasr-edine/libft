#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <string.h>

int
main(int argc, char **argv)
{

	// /* Test copy to 0-sized buffer . */
	// memset(buf, 0, sizeof(buf));
	// assert(strlcpy(buf, "xyzaa", 5) == 3);
	// assert(strcmp(buf, "xyzaa") == 0);

	// /* Test copy to 0-sized buffer . */
	// memset(buf, 0, sizeof(buf));
	// // assert(ft_strlcpy(buf, "xyzaa", 5) == 3);
	// ft_strlcpy(buf, "xyzaa", 0);
	// assert(strcmp(buf, "xyzaa") == 0);

	// char bufa[10];


	// /* Test copy to 0-sized buffer . */
	// memset(bufa, 0, sizeof(bufa));
	// assert(strlcpy(bufa, "xxxxx", 6) == 5);
    // printf("buf: [%s]\n", bufa);
	// assert(strcmp(bufa, "xxxxx") == 0);
	char bufa[10];


	/* Test copy to 0-sized buffer . */
	memset(bufa, 0, sizeof(bufa));
	assert(ft_strlcpy(bufa, "xx", 6) == 2);
    printf("buf: [%s]\n", bufa);
	assert(strcmp(bufa, "xx") == 0);


	// /* Test normal copy. */
	// memset(buf, 0, sizeof(buf));
	// assert(strlcpy(buf, "xyz", sizeof(buf)) == 3);
	// assert(strcmp(buf, "xyz") == 0);

	// /* Test truncated copy. */
	// memset(buf, 0, sizeof(buf));
	// assert(strlcpy(buf, "abcdefabcdef", 10) == 12);
	// assert(strcmp(buf, "abcdefabc") == 0);


    
return 0;
}