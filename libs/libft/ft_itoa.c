/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:13:40 by bailey            #+#    #+#             */
/*   Updated: 2025/02/12 16:13:42 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	num;

	num = n;
	len = ft_numlen(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	*(str + len) = 0;
	while (len--)
	{
		*(str + len) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str) = '-';
	return (str);
}
