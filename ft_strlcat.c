/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:38:02 by haras             #+#    #+#             */
/*   Updated: 2025/06/10 14:39:01 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	source_len;
	size_t	dest_len;
	size_t	index;

	dest_len = ft_strlen(dst);
	source_len = ft_strlen(src);
	if (n <= dest_len)
		return (n + source_len);
	index = 0;
	while (src[index] != '\0' && (dest_len + index) < n - 1)
	{
		dst[dest_len + index] = src[index];
		index++;
	}
	dst[dest_len + index] = '\0';
	return (dest_len + source_len);
}
