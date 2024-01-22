/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:32:16 by serferna          #+#    #+#             */
/*   Updated: 2024/01/22 15:25:02 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char chr)
{
	int	i;
	int	num_word;

	i = 0;
	num_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != chr)
		{
			num_word++;
			while (str[i] != chr && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (num_word);
}

void	ft_free_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

int	ft_process_word(char const **str, char chr, char **word)
{
	int	w_len;

	w_len = 0;
	while (**str != chr && **str != '\0')
	{
		w_len++;
		(*str)++;
	}
	if (w_len > 0)
	{
		*word = ft_calloc(w_len + 1, sizeof(char));
		if (!*word)
			return (0);
		ft_strlcpy(*word, *str - w_len, w_len + 1);
	}
	return (1);
}

char	**ft_split(char const *str, char chr)
{
	int		num_words;
	char	**words;

	if (!str)
		return (0);
	words = ft_calloc(ft_count_words(str, chr) + 1, sizeof(char *));
	if (!words)
		return (NULL);
	num_words = 0;
	while (*str)
	{
		while (*str == chr)
			str++;
		if (ft_process_word(&str, chr, &words[num_words]) == 0)
		{
			ft_free_words(words);
			return (NULL);
		}
		num_words++;
	}
	words[num_words] = NULL;
	return (words);
}


