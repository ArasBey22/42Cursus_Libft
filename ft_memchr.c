/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:55:22 by haras             #+#    #+#             */
/*   Updated: 2025/06/11 11:55:24 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*source_pointer;
	size_t				index;

	source_pointer = (const unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (source_pointer[index] == (unsigned char)c)
			return ((void *)(source_pointer + index));
		index++;
	}
	return (NULL);
}
