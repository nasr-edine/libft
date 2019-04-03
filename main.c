#include "includes/libft.h"

int main(int argc, char *argv[])
{
    char s[20];

//argv[1] = NULL;
    // printf("ft_strlen: [%zu]\n", ft_strlen(argv[1]));
    //printf("strlen: [%zu]\n", strlen(argv[1]));

    // printf("\n");
        printf("strcmp: %d\n", strcmp(ft_strchr(NULL, 'a'), strchr(NULL, 'a')));
    
       //printf("ft_strchr %c : [%s]\n", '\0', ft_strchr(NULL, '\0'));
         printf("strchr %c : [%s]\n", 'a', strchr(NULL, '\0'));

    // printf("\n");
        printf("strcmp: %d\n", strcmp(ft_strchr(NULL, 'a'), strchr(NULL, 'a')));
    
    char *str;
    // printf("ft_strcpy: [%s]\n", ft_strcpy(s, argv[1]));
    //  printf("strcpy: [%s]\n", strcpy(s, argv[1]));

    // printf("\n");

    return(0);
}

 	// check (chr ("abcd", 'z') == NULL, 1);	/* Not found. */
  	// (void) strcpy (one, "abcd");
  	// check (chr (one, 'c') == one+2, 2);	/* Basic test. */
  	// check (chr (one, 'd') == one+3, 3);	/* End of string. */
  	// check (chr (one, 'a') == one, 4);		/* Beginning. */
  	// check (chr (one, '\0') == one+4, 5);	/* Finding NUL. */
  	// (void) strcpy (one, "ababa");
  	// check (chr (one, 'b') == one+1, 6);	/* Finding first. */
  	// (void) strcpy (one, "");
  	// check (chr (one, 'b') == NULL, 7);		/* Empty string. */
  	// check (chr (one, '\0') == one, 8);		/* NUL in empty string. */