/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_coords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:12:06 by msmajdor          #+#    #+#             */
/*   Updated: 2025/02/12 16:53:52 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	find_coords(char **map, short *p_pos, short *e_pos)
{
	short	i;
	short	j;

	i = -1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
		{
			if (map[i][j] == 'P' && p_pos)
			{
				p_pos[0] = i;
				p_pos[1] = j;
			}
			if (map[i][j] == 'E' && e_pos)
			{
				e_pos[0] = i;
				e_pos[1] = j;
			}
		}
	}
}
