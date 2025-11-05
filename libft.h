#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void *ft_memset(void *b, int c, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strdup(const char *s1);

#endif
