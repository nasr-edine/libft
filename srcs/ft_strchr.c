#include "../includes/libft.h"
 
char * ft_strchr(const char *s, int c)
{
    int i = 0;

    //The terminating null character is considered to be part of the string; 
    //therefore if c is `\0', the functions locate the terminating `\0'.
    if(c == '\0')
    {
        while(s[i] != '\0')
        {
            i++;
        }
        // to cast (const char *) in (char *)
        return (char *)&s[i];
    }

    //locate character c in string
    //The strchr() function locates the first occurrence of c (converted to a
    //char) in the string pointed to by s. 
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return (char *)&s[i];
        }
        i++;
    }
    // NULL if the character does not appear in the string.
    return NULL;
}