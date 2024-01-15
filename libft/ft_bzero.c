/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:53:11 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:59:40 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Establece los primeros len bytes del área de memoria 
 * apuntada por ptr al valor 0.
 * @param ptr Puntero al área de memoria a establecer.
 * @param len Número de bytes a establecer.
 */
void	ft_bzero(void *ptr, size_t len)
{
	ft_memset(ptr, 0, len);
}
