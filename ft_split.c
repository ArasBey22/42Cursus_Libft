/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  haras <haras@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:10:32 by  haras            #+#    #+#             */
/*   Updated: 2025/06/15 15:39:42 by  haras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_delimiter(const char source, const char delimiter)
{
	if (source == delimiter)
		return (1);	
	return (0);
}

size_t	lenght_of_string(const char *s, const char delimeter)
{
	size_t	len;
	size_t	index;
	
	index = 0;
	len = 0;
	while (s[index] && !check_delimiter(s[index], delimeter))
	{
		len++;
		index++;
	}
	return(len);
}

int	check_memory(char	**string, size_t	arr_index) 
{
	size_t	index;

	index = 0;
	if (!string[arr_index])
	{
		while (index <= arr_index)
		{
			free(string[index]);
			index++;
		}
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	arr_index;
	size_t	len;	
	char	**result;

	index = 0;
	arr_index = 0;
	while (s[index])
	{
		if (check_delimiter(s[index], c))
		{
			//   eski hesap len = ft_strlen(s) - ft_strlen(s + index);
			len = lenght_of_string(s + index, c);
			result[arr_index] = (char *)malloc(sizeof(char) * (len + 1));
			if (check_memory(result[arr_index],	arr_index))
			{
				ft_strlcpy(result[arr_index], s + index, len + 1);
				arr_index++;
			}
		}
		index++;
	}
	return (result);
}
