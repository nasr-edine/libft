#include "includes/libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i = 0;
    size_t j = 0;
    
    size_t len = strlen(needle);
    
    while(haystack[i])
    {
        j = 0;
        while(needle[j])
        {
            if (needle[j] != haystack[i + j]) 
                break;
            j++;
        }     
        if (len == j) 
            return (char *)haystack + i;
        i++;
    }
    if (haystack[0] == '\0' && needle[0] == '\0') 
        return (char *)haystack;
    return 0;
}