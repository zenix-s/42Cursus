/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:18:42 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:28:21 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		chr -= 32;
	return (chr);
}

// int main(void)
// {
//   char c = 'a';
//   printf("%c\n", ft_toupper(c));
//   return 0;
// }