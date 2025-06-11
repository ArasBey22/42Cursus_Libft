/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:41:00 by haras             #+#    #+#             */
/*   Updated: 2025/06/11 16:41:14 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*source_pointer;
	unsigned char		*dest_pointer;

	dest_pointer = (unsigned char *)dest;
	source_pointer = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (dest_pointer < source_pointer)
	{
	}
}
