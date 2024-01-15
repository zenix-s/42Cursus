/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:30:40 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:28:14 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 32;
	return (chr);
}

// int main(void)
// {
// 	char chr = 'A';
// 	printf("%c\n", ft_tolower(chr));
// 	return 0;
// }