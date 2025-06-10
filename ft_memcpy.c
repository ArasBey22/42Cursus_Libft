/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:33:10 by haras             #+#    #+#             */
/*   Updated: 2025/06/10 15:33:13 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*source_pointer;
	unsigned char		*dest_pointer;
	size_t				index;

	dest_pointer = (unsigned char *)dst;
	source_pointer = (const unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	index = 0;
	while (index < n)
	{
		dest_pointer[index] = source_pointer[index];
		index++;
	}
	return (dst);
}
