/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  haras <haras@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:01:02 by haras             #+#    #+#             */
/*   Updated: 2025/06/20 13:54:23 by  haras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			index;

	pointer = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		pointer[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
