/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:02:14 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:02:58 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int chr, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (len--)
	{
		if (*p == (unsigned char)chr)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
