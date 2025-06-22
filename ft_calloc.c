/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:53:45 by haras             #+#    #+#             */
/*   Updated: 2025/06/22 14:56:16 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*location_pointer;

	location_pointer = malloc(size * nmemb);
	if (!location_pointer)
		return (NULL);
	ft_bzero(location_pointer, (size * nmemb));
	return (location_pointer);
}
