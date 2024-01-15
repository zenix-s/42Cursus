/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:39:26 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:39:50 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Comprueba si el caracter es un valor ASCII
 * @param chr caracter a comprobar
 * @return 1 si es un valor ASCII, 0 si no lo es
 */
int	ft_isascii(int chr)
{
	if (chr >= 0 && chr <= 127)
		return (1);
	return (0);
}
