#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;

    // s= ft_strcpy(s, "toto");
    // s= ft_strcpy(s, NULL);
    // s= strcpy(NULL, NULL);
    s= ft_strcpy(NULL, NULL);

    printf("%s\n", s);
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