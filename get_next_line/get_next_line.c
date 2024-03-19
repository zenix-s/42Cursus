/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/03/19 12:45:29 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_line(char **str)
{
	char *line;
	char *temp;
	int i;

	i = 0;
	while ((*str)[i] != '\n' && (*str)[i] != '\0')
		i++;
	if ((*str)[i] == '\n')
	{
		line = ft_substr(*str, 0, i + 1);
		temp = ft_strdup(&((*str)[i + 1]));
		free(*str);
		*str = temp;
		if ((*str)[0] == '\0')
		{
			free(*str);
			*str = NULL;
		}
	}
	else
	{
		line = ft_strdup(*str);
		free(*str);
		*str = NULL;
	}
	return (line);
}

char *get_next_line(int fd)
{
	static char *str;
	char *buffer;
	char *temp;
	int bytes_read;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 1024)
		return (NULL);

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!str)
			str = ft_strdup("");
		temp = ft_strjoin(str, buffer);
		free(str);
		str = temp;
		if (ft_strchr(str, '\n'))
			break;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (bytes_read < 0)
		return (NULL);
	return (get_line(&str));
}