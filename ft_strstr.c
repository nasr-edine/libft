#include "includes/libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i = 0;
    size_t j = 0;
    
    size_t len = strlen(needle);
    
    while(haystack[i])
    {
        // putchar(haystack[i]);
        // puts("");
        j = 0;
        while(needle[j])
        {
            
            if (needle[j] != haystack[i + j]) 
            {
                // puts(" No ");
                break;
            }
            
            // putchar(needle[j]);
            j++;
        }     
        
        if (len == j) 
        {
            // puts(" Yes ");
            return (char *)haystack + i;
        }
           
        // puts("");
        i++;
    }
    
    if (haystack[0] == '\0' && needle[0] == '\0') {
        return (char *)haystack;
    }
    
    return 0;
    
}




        // printf("%zu\n", j);
        // if (len == j - 1) 
        // {
        //     return (char *)haystack + i;
        // }