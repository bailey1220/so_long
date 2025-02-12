/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 09:08:47 by msmajdor          #+#    #+#             */
/*   Updated: 2025/02/12 16:56:06 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_shape(char **map)
{
	size_t	len;
	size_t	i;

	if (!map || !map[0])
		error(map, "Invalid map!");
	i = 0;
	len = map_width(map[0]);
	while (map[i])
	{
		if (map_width(map[i]) != len)
			error(map, "The map must be rectangular!");
		i++;
	}
}
