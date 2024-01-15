/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:43 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:14:12 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	char	*new_str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	while (str[i] != '\0' && ft_strchr(set, str[i]) != NULL)
		i++;
	while (str[len - 1] != '\0' && ft_strchr(set, str[len - 1]) != NULL)
		len--;
	while (i < len)
	{
		new_str[j] = str[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

// int main(void)
// {
// 	char *st = "* * * *Hola mundo* * * *";
// 	char *set = "* ";
// 	char *new_st = ft_strtrim(st, set);
// 	printf("%s\n", new_st);
// 	// printf("strtrim: %s\n", strtrim(st, set));
// 	free(new_st);
// 	return 0;
// }