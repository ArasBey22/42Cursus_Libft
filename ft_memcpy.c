/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:43:39 by haras             #+#    #+#             */
/*   Updated: 2025/06/11 11:45:37 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source_pointer;
	unsigned char		*dest_pointer;
	size_t				index;

	dest_pointer = (unsigned char *)dest;
	source_pointer = (const unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dest_pointer[index] = source_pointer[index];
		index++;
	}
	return (dest);
}
