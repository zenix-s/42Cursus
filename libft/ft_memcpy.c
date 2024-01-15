/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:59:57 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:00:45 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copia n bytes del área de memoria src al área de memoria dest.
 * @param dest Puntero al área de memoria de destino.
 * @param src Puntero al área de memoria de origen.
 * @param len Número de bytes a copiar.
 * @return Puntero al área de memoria de destino.
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char				*d;
	const unsigned char			*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (len--)
		*d++ = *s++;
	return (dest);
}

// int main(void)
// {
//   char src[50] = "Hola mundo";
//   char dest[50] = "Adios Mundo";

//   printf("Antes memcpy  = %s\n", dest);
//   ft_memcpy(dest, src, 5);
//   printf("Despues memcpy = %s\n", dest);
//   return 0;
// }
