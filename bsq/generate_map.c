/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:14:20 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 17:51:00 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	generate_map(char *path, t_map *map, int get_stdin)
{
	char	*content;
	int		i;

	if (get_stdin == 1)
		content = read_stdin();
	else
		content = read_file(path);
	i = 0;
	if (content == NULL)
		return (1);
	while (content[i] >= '0' && content[i] <= '9' && content[i + 3] != '\n')
		i++;
	map->row = atoi_n(content, i);
	map->empty = content[i++];
	map->obstacle = content[i++];
	map->full = content[i++];
	map->map = allocate_array(content + i + 1, map->row, 0);
	if (map->map == 0)
	{
		free(content);
		return (1);
	}
	map->map = fill_array(content + i + 1, map->map, 0);
	free(content);
	return (0);
}

char	**allocate_array(char *content, int row, int i)
{
	char	**array;
	int		j;
	int		row_count;

	j = 0;
	row_count = 0;
	array = malloc (sizeof(char *) * (row + 1));
	if (array == 0)
		return (0);
	while (content[i])
	{
		j = 0;
		while (content[i + j] != '\n')
			j++;
		array[row_count] = malloc (sizeof(char) * (j + 1));
		if (array[row_count] == 0)
			return (array);
		array[row_count++][j] = '\0';
		i += j + 1;
	}
	return (array);
}

char	**fill_array(char *content, char **array, int i)
{
	int		j;
	int		row_count;

	j = 0;
	row_count = 0;
	while (content[i])
	{
		j = 0;
		while (content[i + j] != '\n')
		{
			array[row_count][j] = content[i + j];
			j++;
		}
		array[row_count++][j] = '\0';
		i += j + 1;
	}
	return (array);
}

/*
void	init_map(t_map *map)
{
	map->map = 0;
	map->row = 0;
	map->empty = 0;
	map->obstacle = 0;
	map->full = 0;
}
*/
