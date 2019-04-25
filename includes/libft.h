#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc

size_t ft_strlen(const char *s);
size_t ft_strnlen(const char *s, size_t maxlen);

char *ft_strchr(const char *str, int c);
char * ft_strrchr(const char *s, int c);
void * ft_memchr(const void *s, int c, size_t n);

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

char *ft_strcpy(char *dest, char *src);

int ft_strcmp(const char *str1, const char *str2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

#endif