/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:09 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 12:53:01 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	void	*ptr;

	ptr = malloc(count * len);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, count * len);
	return (ptr);
}
