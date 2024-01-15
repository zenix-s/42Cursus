/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:45:37 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:45:53 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i--)
	{
		if (str[i] == (char)chr)
			return ((char *)&str[i]);
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "Hola mundo";
// 	printf("%s\n", ft_strrchr(str, 'o'));
// 	return 0;
// }
