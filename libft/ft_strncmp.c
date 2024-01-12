/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:21:12 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 15:08:24 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Comparar dos cadenas de caracteres (hasta n caracteres).
 * @param str1 Primera cadena de caracteres.
 * @param str2 Segunda cadena de caracteres.
 * @param len Número de caracteres a comparar.
 * @return 0 si las cadenas son iguales, un número negativo si str1 es menor que str2, un número positivo si str1 es mayor que str2.
*/
int ft_strncmp(const char *str1, const char *str2, size_t len) {
  while (len > 0 && *str1 && (*str1 == *str2)) {
    str1++;
    str2++;
    len--;
  }
  if (len == 0) {
    return 0;
  }
  return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main(void)
{
  char *str1 = "Hello";
  char *str2 = "Hello World";

  printf("%d\n", ft_strncmp(str1, str2, 5));
}