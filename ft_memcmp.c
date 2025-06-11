/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:54:56 by haras             #+#    #+#             */
/*   Updated: 2025/06/11 11:55:00 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s2_pointer;
	const unsigned char	*s1_pointer;

	s1_pointer = (const unsigned char *)s1;
	s2_pointer = (const unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s1_pointer[index] != s2_pointer[index])
			return ((int)s1_pointer[index] - (int)s2_pointer[index]);
		index++;
	}
	return (0);
}
