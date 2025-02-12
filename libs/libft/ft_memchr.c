/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:15:03 by bailey            #+#    #+#             */
/*   Updated: 2025/02/12 16:15:04 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_s;
	size_t			i;

	p_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == (unsigned char) c)
			return ((void *)(p_s + i));
		i++;
	}
	return (NULL);
}
