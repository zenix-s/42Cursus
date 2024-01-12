/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:54:42 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 18:38:11 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// Parte 1
int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_isascii(int chr);
int		ft_isprint(int chr);
int		ft_toupper(int chr);
int		ft_tolower(int chr);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
char	*ft_strchr(const char *str, int chr);
int		ft_strnstr(const char *str, const char *str_to_find);
size_t  ft_strlcpy(char *dst, const char *src, size_t len);
size_t  ft_strlcat(char *dst, const char *src, size_t len);

void	*ft_memset(void *ptr, int chr, size_t len);
void	ft_bzero(void *ptr, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *ptr, int chr, size_t len);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t len);

int		ft_atoi(const char *str);

void  *ft_calloc(size_t count, size_t len);



#endif
