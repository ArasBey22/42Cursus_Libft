/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:07:16 by haras             #+#    #+#             */
/*   Updated: 2025/06/11 15:07:19 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	size_t	index;
	char	*location_pointer;

	length = ft_strlen(s);
	location_pointer = (char *)malloc(sizeof(char) * (length + 1));
	if (!location_pointer)
		return (NULL);
	index = 0;
	while (index < length)
	{
		location_pointer[index] = s[index];
		index++;
	}
	location_pointer[index] = '\0';
	return (location_pointer);
}
