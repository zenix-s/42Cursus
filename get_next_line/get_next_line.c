/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/02/02 10:16:26 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *str[1024];
	char *buffer;
	char *aux;
	int i;

	i = read(fd, NULL, 0);

	if (i < 0 || BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!str[fd])
		str[fd] = ft_strdup("");
	if (!str[fd])
		return (NULL);

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
	{
		free(str[fd]);
		return (NULL);
	}

	i = 1;

	while (i)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i < 0)
		{
			free(buffer);
			free(str[fd]);
			return (NULL);
		}

		buffer[i] = '\0';
		aux = ft_strjoin(str[fd], buffer);

		if (ft_strchr(aux, '\n'))
		{
			free(buffer);
			free(str[fd]);
			str[fd] = ft_strdup(ft_strchr(aux, '\n') + 1);
			return (ft_substr(aux, 0, ft_strchr(aux, '\n') - aux));
		}
		else
		{
			free(str[fd]);
			str[fd] = ft_strdup(aux);
		}
		free(buffer);
		free(aux);
	}
	return (NULL);
}