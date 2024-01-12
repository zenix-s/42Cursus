/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:18:42 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 15:05:51 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Convierte una letra minúscula a mayúscula.
 * @param chr Caracter a convertir.
 * @return Caracter convertido.
*/
int ft_toupper(int chr) 
{
  if (chr >= 'a' && chr <= 'z') 
  {
    chr -= 32;
  }
  return chr;
}

// int main(void)
// {
//   char c = 'a';
//   printf("%c\n", ft_toupper(c));
//   return 0;
// }