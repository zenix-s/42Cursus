/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:21:23 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 10:20:23 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Comprueba si el caracter es un digito
 * @param chr caracter a comprobar
 * @return 1 si es un digito, 0 si no lo es
*/
int ft_isdigit(int chr)
{
  if (chr >= '0' && chr <= '9')
    return (1);
  return (0);
}
