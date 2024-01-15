/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:40:04 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:40:11 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Comprueba si el caracter es imprimible
 * @param chr caracter a comprobar
 * @return 1 si es imprimible, 0 si no lo es
 */
int	ft_isprint(int chr)
{
	if (chr >= 32 && chr <= 126)
		return (1);
	return (0);
}
