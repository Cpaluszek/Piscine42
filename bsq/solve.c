/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:20:28 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 19:47:20 by eslamber         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	solve(t_map *map)
{
	int	**int_map;
	int	max;

	int_map = allocate_int_map(*map);
	if (int_map == NULL)
		return (-1);
	setup_int_map(*map, int_map);
	max = big_brain(int_map, map->row, ft_strlen(map->map[0]), -1);
	find_biggest_square(map, int_map, max);
	return (0);
}

int	big_brain(int **map, int row, int len, int max)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < len)
		{
			if (map[i][j] == -2)
			{
				map[i][j] = min(map[i - 1][j], map[i - 1][j - 1]);
				map[i][j] = min(map[i][j], map[i][j - 1]);
				map[i][j]++;
				if (max < map[i][j])
					max = map[i][j];
			}
			else if (i == 0 || j == 0)
				if (max < map[i][j])
					max = map[i][j];
			j++;
		}
		i++;
	}
	return (max);
}

int	**allocate_int_map(t_map map)
{
	int	**int_map;
	int	len;
	int	i;
	int	j;

	int_map = malloc(sizeof(int *) * (map.row));
	if (int_map == 0)
		return (NULL);
	len = ft_strlen(map.map[0]);
	i = 0;
	j = 0;
	while (i < map.row)
	{
		int_map[i] = malloc(sizeof(int) * len);
		if (int_map[i] == 0)
		{
			while (j < i)
				free(int_map[j++]);
			free(int_map);
			return (NULL);
		}
		i++;
	}
	return (int_map);
}

void	setup_int_map(t_map map, int **int_map)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(map.map[0]);
	i = 0;
	while (i < map.row)
	{
		j = 0;
		while (j < len)
		{
			if (map.map[i][j] == map.obstacle)
				int_map[i][j] = -1;
			else if (i == 0 || j == 0)
				int_map[i][j] = 0;
			else
				int_map[i][j] = -2;
			j++;
		}
		i++;
	}
}
