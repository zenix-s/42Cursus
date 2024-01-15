/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:15:40 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:34:18 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Comprueba si el caracter es alfanumerico
 * @param chr caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es

*/
int	ft_isalpha(int chr)
{
	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
	{
		return (1);
	}
	return (0);
}
