/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:44:06 by  haras            #+#    #+#             */
/*   Updated: 2025/06/26 14:33:31 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_letter(const char s1, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (s1 == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	end = len;
	start = 0;
	while (s1[start] && check_letter(s1[start], set))
		start++;
	while (start < end && check_letter(s1[end - 1], set))
		end--;
	len = end - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}
