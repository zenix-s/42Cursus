/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:21:23 by serferna          #+#    #+#             */
/*   Updated: 2024/01/09 12:25:26 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el caracter es un digito
 * @param character caracter a comprobar
 * @return 1 si es un digito, 0 si no lo es
*/
int ft_isdigit(int character)
{
  if (character >= '0' && character <= '9')
    return (1);
  return (0);
}
