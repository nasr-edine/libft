#include "includes/libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90) 
    {
        return c + 32;
    }
    
    return c;
}

// 97  a
// 65  A