/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:19:10 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/06 12:25:00 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	**ft_free_split(char **split, size_t words)
{
	while (words > 0)
	{
		words--;
		free(split[words]);
	}
	free(split);
	return (NULL);
}

static char	*ft_get_word(char const *s, size_t *i, char c)
{
	size_t	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word;
	size_t	words;

	words = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	word = 0;
	while (word < words)
	{
		split[word] = ft_get_word(s, &i, c);
		if (!split[word])
			return (ft_free_split(split, word));
		word++;
	}
	split[word] = NULL;
	return (split);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc != 3)
		return (1);
	split = ft_split(argv[1], argv[2][0]);
	if (!split)
		return (1);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}
*/
