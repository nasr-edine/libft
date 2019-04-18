#include "includes/libft.h"

int main(int argc, char *argv[])
{
    char c = 'v';
    char *s = NULL;
    
    printf("[%s]\n", ft_strrchr("\0azerty\0", c));
    printf("[%p]\n\n", ft_strrchr("\0azerty\0", c));

    printf("[%s]\n", strrchr("\0azerty\0", c));
    printf("[%p]\n", strrchr("\0azerty\0", c));

    return(0);
}
