/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/01/31 19:13:44 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *ptr, int chr, size_t len)
{
	unsigned char	*act_byte;
	unsigned char	value;

	act_byte = ptr;
	value = (unsigned char)chr;
	while (len--)
	{
		*act_byte++ = value;
	}
	return (ptr);
}

void	ft_bzero(void *ptr, size_t len)
{
	ft_memset(ptr, 0, len);
}

void	*ft_calloc(size_t count, size_t len)
{
	void	*ptr;

	if (count && len && count > (SIZE_MAX / len))
		return (NULL);
	ptr = malloc(count * len);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, count * len);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}



char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*start_str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	start_str = str;
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (start_str);
}

char	*ft_strchr(const char *str, int chr)
{
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if (*str == (char)chr)
		return ((char *)str);
	return (NULL);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	final_len;
	char	*substr;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	final_len = ft_strlen(str + start);
	if (final_len < len)
		len = final_len;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}

char *get_next_line(int fd)
{
	
	static char *str;
	char *buffer;
	char *aux;
	int i;
	int j;

	if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0) < 0)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	while ((i = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[i] = '\0';
		aux = ft_strjoin(str, buffer);
		free(str);
		str = aux;
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(buffer);
	if (i < 0)
		return (NULL);
	if (!i && !ft_strlen(str))
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	aux = ft_substr(str, 0, i);
	if (str[i] == '\n')
		i++;
	j = 0;
	while (str[i + j] != '\0')
		j++;
	buffer = ft_substr(str, i, j);
	free(str);
	str = buffer;
	return (aux);
}

int main()
{

	int fd;
	char *line;

	fd = open("file1.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);

}