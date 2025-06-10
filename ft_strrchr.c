/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:43:11 by haras             #+#    #+#             */
/*   Updated: 2025/06/10 14:47:11 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*letter_location;
	size_t	index;

	letter_location = NULL;
	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			letter_location = (char *)(s + index);
		index++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + index));
	return (letter_location);
}
