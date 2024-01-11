/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:18:42 by serferna          #+#    #+#             */
/*   Updated: 2024/01/11 12:19:34 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Convierte una letra minúscula a mayúscula.
 * @param c Caracter a convertir.
 * @return Caracter convertido.
*/
int ft_toupper(int c) 
{
  while (c >= 'a' && c <= 'z') 
  {
    c -= 32;
  }
  return c;
}

// int main(void)
// {
//   char c = 'a';
//   printf("%c\n", ft_toupper(c));
//   return 0;
// }