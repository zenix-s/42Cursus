/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:32:16 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 20:28:55 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reservar la memoria con calloc dividir y asignar con strlcpy
char **ft_split(char const *str, char chr)
{
	int i;
	int n_words;
	int w_len;
	char **words;

	n_words = 0;
	i = 0;
	w_len = 0;

	// Calculamos el numero de palabras
	while (str[i])
	{
		if (str[i] == chr)
		{
			if (w_len > 0)
				n_words++;
			w_len = 0;
		}
		else
			w_len++;
		i++;
	}

	// printf("Numero de palabras: %d\n", n_words);
	// printf("Cadena: '%s'\n", str);
	// printf("Caracter a buscar: '%c'\n", chr);

	words = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!words)
		return (NULL);

	i = 0;
	w_len = 0;
	n_words = 0;
	while (str[i])
	{
		if (str[i] == chr)
		{
			if (w_len > 0)
			{ 
				words[n_words] = (char *)malloc(sizeof(char) * (w_len + 1));
				if (!words[n_words])
					return (NULL);
				ft_strlcpy(words[n_words], str + i - w_len, w_len + 1);
				// printf("Palabra %d: '%s'\n", n_words, words[n_words]);
				n_words++;
			}
			w_len = 0;
		}
		else
			w_len++;
		i++;
	}

	return (words);
}

// int main()
// {
// 	char *str = " Hola mundo como estas ";
// 	char chr = ' ';
// 	char **words;

// 	words = ft_split(str, chr);

// 	for (int i = 0; i < 4; i++)
// 	{
// 		printf("Palabra %d: '%s'\n", i, words[i]);
// 	}
// }