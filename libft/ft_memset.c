/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:23:21 by serferna          #+#    #+#             */
/*   Updated: 2024/01/19 10:09:59 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int chr, size_t len)
{
	unsigned char	*p;
	unsigned char	value;

	p = ptr;
	value = (unsigned char)chr;
	while (len--)
	{
		*p++ = value;
	}
	return (ptr);
}
