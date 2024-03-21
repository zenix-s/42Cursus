/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/03/21 14:33:47 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_line_leave_rest(char **text)
{
	int i;
	int len;

	i = 0;
	
	if(!(*text)[i])
		return (NULL);
	
	len = ft_strlen(*text);

	while ((*text)[i] != '\n' && (*text)[i] != '\0')
		i++;

	char *line = ft_substr(*text, 0, i + 1);	
	char *rest = ft_substr(*text, i + 1, len - i);
	if (!line || !rest)
	{
		free(*text);
		return (NULL);
	}
	free(*text);
	*text = rest;
	return (line);
}

char *read_file(int fd, char *text)
{
	char buffer[BUFFER_SIZE + 1];
	char *tmp;
	int bytes_read;

	// buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	// if (!buffer)
	// 	return (NULL);
	bytes_read = 1;
	while (!strchr(text, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if ((bytes_read == 0 && !ft_strlen(text)) || bytes_read < 0)
		{
			// free(buffer);
			free(text);
			return (NULL);
		}
		// if (bytes_read < 0)
		// {
		// 	free(text);
		// 	return (NULL);
		// }
		buffer[bytes_read] = '\0';
		tmp = text;
		text = ft_strjoin(text, buffer);
		free(tmp);
	}
	// free(buffer);
	
	return (text);
}

char *get_next_line(int fd)
{
	static char *text;
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	if (!text)
		text = ft_strdup("");
	

	text = read_file(fd, text);
	if (!text)
		return (NULL);
	
	if (!ft_strchr(text, '\n'))
	{
		line = ft_strdup(text);
		free(text);
		text = NULL;
		return (line);
	}
	else
	{
		line = get_line_leave_rest(&text);
		return (line);
	}
	return (NULL);
}