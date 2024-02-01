/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/02/01 10:25:40 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void ft_free_gnl(char *str, char *buffer, char *aux)
{
	if (str)
		free(str);
	if (buffer)
		free(buffer);
	if (aux)
		free(aux);
}

char *gnl_str_lj(char *str, char *buffer)
{
	char *aux;
	int i;
	int j;

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
	free(buffer);
	return (aux);
}

char *get_next_line(int fd)
{
	
	static char *str[1024];
	char *buffer;
	char *aux;
	int i;
	int j;

	i = 0;
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0) < 0)
		return (NULL);
	if (!str[fd])
		str[fd] = ft_strdup("");
	
	if (ft_strchr(str[fd], '\n'))
		return (gnl_str_lj(str[fd], buffer));

	while ((i = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[i] = '\0';
		aux = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = aux;
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	free(buffer);
	if (i < 0)
	{
		ft_free_gnl(str[fd], buffer, aux);
		return (NULL);
	}
	if (!i && !ft_strlen(str[fd]))
	{
		ft_free_gnl(str[fd], buffer, aux);
		return (NULL);
	}
	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	aux = ft_substr(str[fd], 0, i);
	if (str[fd][i] == '\n')
		i++;
	j = 0;
	while (str[fd][i + j] != '\0')
		j++;
	buffer = ft_substr(str[fd], i, j);
	// free(str);
	str[fd] = buffer;
	return (aux);
}

