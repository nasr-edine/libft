#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc

size_t ft_strlen(char *s);
char *ft_strchr(const char *str, int c);
char * ft_strrchr(const char *s, int c);
char *ft_strcpy(char *dest, char *src);
int ft_strcmp(const char *str1, const char *str2);
#endif