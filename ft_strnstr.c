#include "includes/libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    
    size_t length = strlen(needle);
    
    while(haystack[i])
    {
        j = 0;
        while(needle[j])
        {
            if (needle[j] != haystack[i + j]) {
                break;
            }
                
            j++;
        }     
        if (length == j  && i + j <= len) 
            return (char *)haystack + i;
        i++;
    }
    if (needle[0] == '\0') 
        return (char *)haystack;
    return 0;
}