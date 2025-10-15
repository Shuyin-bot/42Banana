/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:56:38 by mnestere          #+#    #+#             */
/*   Updated: 2025/08/19 12:06:36 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_separator(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_separator(sep, str[i]))
		{
			words++;
			while (str[i] && !is_separator(sep, str[i]))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		length;
	int		i;

	length = 0;
	while (str[length] && !is_separator(sep, str[length]))
		length++;
	word = (char *)malloc(sizeof(char *) * (length + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(sep, str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_separator(charset, str[i]))
		{
			words[j] = word_splitter(&str[i], charset);
			while (str[i] && !is_separator(charset, str[i]))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	char *sep = "h";
		tab = ft_split("H2el3lo11I2am3leg4en3d", sep);
	while (i < 1)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab[3]);
	return (0);
}
