/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:30:40 by serferna          #+#    #+#             */
/*   Updated: 2024/01/11 12:31:12 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Convierte una letra mayúscula a minúscula.
 * @param c Caracter a convertir.
 * @return Caracter convertido.
*/
int ft_tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    c += 32;
  }
  return c;
}

int main(void)
{
  char c = 'A';
  printf("%c\n", ft_tolower(c));
  return 0;
}