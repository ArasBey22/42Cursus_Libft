/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  haras <haras@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:10:32 by  haras            #+#    #+#             */
/*   Updated: 2025/06/19 16:36:53 by  haras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_delimiter(const char c, const char delimiter)
{
	if (c == delimiter)
		return (1);
	return (0);
}

size_t	count_words(const char *s, const char delimiter)
{
	size_t	word_count;
	size_t	index;

	word_count = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] && check_delimiter(s[index], delimiter))
			index++;
		if (s[index])
			word_count++;
		while (s[index] && !check_delimiter(s[index], delimiter))
			index++;
	}
	return (word_count);
}

static void	free_all(char **res, int last_index)
{
	while (--last_index >= 0)
		free(res[last_index]);
	free(res);
}

static int	fill_word(char const *s, char c, char **res)
{
	int	i;
	int	word_len;
	int	start;
	int	index;

	i = 0;
	start = 0;
	index = 0;
	while (s[i])
	{
		word_len = 0;
		while (s[i] && s[i] == c)
		{
			i++;
			start++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		if (word_len > 0)
		{
			res[index] = ft_substr(s, start, word_len);
			if (!res[index])
				return (free_all(res, index), 0);
			index++;
		}
		start += word_len;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!fill_word(s, c, result))
		return (NULL);
	result[word_count] = NULL;
	return (result);
}
