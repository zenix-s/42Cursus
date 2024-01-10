/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:23:21 by serferna          #+#    #+#             */
/*   Updated: 2024/01/10 18:24:36 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Establece los primeros n bytes de un área de la memoria s al valor c.
 * @param s Puntero al área de memoria a establecer.
 * @param c Valor a establecer.
 * @param n Número de bytes a establecer.
 * @return Puntero al área de memoria alterada.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;

	p = s;
	value = (unsigned char)c;
	while (n--)
	{
		*p++ = value;
	}
	return (s);
}

// int main(void)
// {
//   char str[] = "Hola mundo";
//   ft_memset(str, 'a', 5);
//   printf("%s\n", str);
//   return 0;
// }