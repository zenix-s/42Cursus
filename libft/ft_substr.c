/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:08:48 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:09:39 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (len--)
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	return (substr);
}

// int main(void)
// {
// 	const char src[50] = "Hola mundo";
// 	printf("%s", ft_substr(src, 5, 5));
// 	return 0;
// }