/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:50:10 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:50:44 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//   char src[50] = "Hola mundo";
//   char dest[50] = "Adios Mundo";
//   printf("Antes strlcpy  = %s\n", dest);
//   int x = ft_strlcpy(dest, src, 7);
//   printf("Len src %d, Despues strlcpy = %s\n", x, dest);
//   return 0;
// }