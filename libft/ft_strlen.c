/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:47:11 by serferna          #+#    #+#             */
/*   Updated: 2024/01/12 18:40:12 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Calcula la longitud de una cadena
 * @param str cadena a calcular
 * @return longitud de la cadena
*/
size_t ft_strlen(const char *str)
{
  size_t i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}