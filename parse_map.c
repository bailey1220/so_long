/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:56:04 by msmajdor          #+#    #+#             */
/*   Updated: 2025/02/12 16:57:48 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//reading and parsing a .ber map file
//contencate each string into one singlee string

static char	*read_map(int fd)
{
	char	*str;
	char	*tmp;
	char	*line;

	str = get_next_line(fd);
	if (!str)
	{
		close(fd);
		error(NULL, "Map file is empty");
	}
	line = get_next_line(fd);
	while (line)
	{
		tmp = str;
		str = ft_strjoin(tmp, line);
		free(line);
		free(tmp);
		line = get_next_line(fd);
	}
	return (str);
}
//convert mapstring to array

char	**parse_map(char *path)
{
	char	**map;
	char	*map_str;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		error(NULL, "Wrong file path");
	map_str = read_map(fd);
	close(fd);
	map = ft_split(map_str, '\n');
	free(map_str);
	if (!map)
		error(NULL, "Memory allocation failed");
	return (map);
}
