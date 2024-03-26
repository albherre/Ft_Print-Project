/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albherre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:43:08 by albherre          #+#    #+#             */
/*   Updated: 2024/03/12 17:49:33 by albherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	fill_split(char **split, char const *s, char c, size_t word_cnt)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (s[i] != '\0' && j < word_cnt)
	{
		if (s[i] != c && start < 0)
		{
			start = i;
		}
		if (s[i] == c && start >= 0)
		{
			split[j++] = word_dup(s + start, i - start);
			start = -1;
		}
		if (s[i + 1] == '\0' && start >= 0)
		{
			split[j++] = word_dup(s + start, i - start + 1);
		}
		i++;
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_cnt;

	if (!s)
		return (NULL);
	word_cnt = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (!split)
		return (NULL);
	fill_split(split, s, c, word_cnt);
	return (split);
}
