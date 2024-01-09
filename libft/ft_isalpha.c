/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:15:40 by serferna          #+#    #+#             */
/*   Updated: 2024/01/09 12:17:28 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el caracter es alfanumerico
 * @param character caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es
 
*/
int ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}