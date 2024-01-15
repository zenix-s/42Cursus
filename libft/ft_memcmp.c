/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:03:39 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:11:59 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = str1;
	p2 = str2;
	while (len--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// int main(void)
// {
//   char *str1 = "Hello";
//   char *str2 = "Hello World";

//   printf("%d\n", ft_memcmp(str1, str2, 5));
// }