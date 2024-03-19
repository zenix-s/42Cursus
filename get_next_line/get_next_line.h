#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

void	*ft_memset(void *ptr, int chr, size_t len);

void	ft_bzero(void *ptr, size_t len);

void	*ft_calloc(size_t count, size_t len);

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *str);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strchr(const char *str, int chr);

size_t	ft_strlcpy(char *dst, const char *src, size_t len);

char	*ft_substr(const char *str, unsigned int start, size_t len);

char *get_next_line(int fd);

#endif