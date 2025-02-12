/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:41:50 by bailey            #+#    #+#             */
/*   Updated: 2025/02/12 16:41:52 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	p_dest = (unsigned char *) dest;
	p_src = (const unsigned char *) src;
	i = 0;
	if (src < dest)
		while (n--)
			p_dest[n] = p_src[n];
	else
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}
