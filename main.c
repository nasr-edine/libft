#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{

    char source[] = "GeeksFor\0Geeks"; 
  
    // 5 bytes of source are copied to a new memory 
    // allocated dynamically and pointer to copied 
    // memory is returned. 
    char* target = ft_strndup(source, 8); 
    char* target2 = ft_strndup(source, 8); 
  
    printf("%s\n", target);
    printf("%s\n", target2);
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