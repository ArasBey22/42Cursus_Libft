/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:36:16 by haras             #+#    #+#             */
/*   Updated: 2025/06/10 14:37:20 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*pointer;

	pointer = (char *)s;
	i = 0;
	while (pointer[i] != '\0')
	{
		if (pointer[i] == (unsigned char)c)
			return (pointer + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (pointer + i);
	return (NULL);
}
