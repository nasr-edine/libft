#include "includes/libft.h"

int main(int argc, char const *argv[])
{
    printf("size: %zu\n", ft_strlen(""));
    printf("size: %zu\n", ft_strnlen("abc", -1));
    printf("size: %zu\n", strnlen("abc", -1));
    
    return 0;
}
