/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  haras <haras@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:41:54 by  haras            #+#    #+#             */
/*   Updated: 2025/06/19 12:15:47 by  haras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*fill_word(char *destination, int n, int index)
{
	if (n == 0)
	{
		destination[0] = '0';
		return (destination);
	}
	if (n < 0)
	{
		destination[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		destination[index--] = (n % 10) + '0';
		n /= 10;
	}
	return (destination);
}

char	*ft_itoa(int n)
{
	int		num_length;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num_length = count_digits(n);
	result = (char *)malloc(num_length + 1);
	if (!result)
		return (NULL);
	result[num_length] = '\0';
	result = fill_word(result, n, num_length - 1);
	return (result);
}
