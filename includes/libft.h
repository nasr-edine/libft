#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);
size_t ft_strnlen(const char *s, size_t maxlen);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void * dst, const void * src, size_t n);
#endif