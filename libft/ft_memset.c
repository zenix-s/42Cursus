/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:23:21 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 15:09:15 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Establece los primeros len bytes de un área de la memoria ptr al valor chr.
 * @param ptr Puntero al área de memoria a establecer.
 * @param chr Valor a establecer.
 * @param len Número de bytes a establecer.
 * @return Puntero al área de memoria alterada.
 */
void	*ft_memset(void *ptr, int chr, size_t len)
{
  unsigned char	*p;
  unsigned char	value;

  p = ptr;
  value = (unsigned char)chr;
  while (len--)
  {
    *p++ = value;
  }
  return (ptr);
}

// int main(void)
// {
//   char str[] = "Hola mundo";
//   ft_memset(str, 'a', 5);
//   printf("%s\n", str);
//   return 0;
// }