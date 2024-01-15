/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:13:09 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 11:13:23 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	void	*ptr;

	if (count == 0 || len == 0)
		return (NULL);
	ptr = malloc(count * len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * len);
	return (ptr);
}

// int main(void)
// {
// 	char *ptr;

// 	ptr = ft_calloc(10, sizeof(char));
// 	if (ptr == NULL)
// 		return 1;
// 	ft_strlcpy(ptr, "Hola", 5);
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return 0;
// }