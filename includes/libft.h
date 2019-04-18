#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc

size_t ft_strlen(const char *s);
char *ft_strchr(const char *str, int c);
char * ft_strrchr(const char *s, int c);
void * ft_memchr(const void *s, int c, size_t n);

char *ft_strcpy(char *dest, char *src);
int ft_strcmp(const char *str1, const char *str2);
#endif