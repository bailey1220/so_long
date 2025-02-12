/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:36:43 by bailey            #+#    #+#             */
/*   Updated: 2025/02/12 16:36:50 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (is_set(*s1, set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (is_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
