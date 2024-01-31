/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:08:09 by serferna          #+#    #+#             */
/*   Updated: 2024/01/31 20:06:47 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

