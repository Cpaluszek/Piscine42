/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:51:20 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 19:48:18 by eslamber         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr(char *str, int mod)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(mod, &str[i], 1);
		i++;
	}
	write(mod, "\n", 1);
}

void	print(t_map map)
{
	int	i;

	i = 0;
	while (i < map.row)
		ft_putstr(map.map[i++], STDOUT_FILENO);
}

void	find_biggest_square(t_map *map, int **i_map, int max)
{
	int	len;
	int	i;
	int	j;
	int	size;

	if (max != -1)
	{
		len = ft_strlen(map->map[0]);
		i = 0;
		while (i < map->row)
		{
			j = 0;
			while (j < len)
			{
				if (i_map[i][j] == max)
				{
					size = i_map[i][j];
					draw_square(map, i, j, size);
					return ;
				}
				j++;
			}
			i++;
		}
	}
}

void	draw_square(t_map *map, int i, int j, int size)
{
	int	x;
	int	y;
	int	start_j;

	y = 0;
	start_j = j;
	while (y <= size)
	{
		x = 0;
		j = start_j;
		while (x <= size)
		{
			map->map[i][j] = map->full;
			x++;
			j--;
		}
		i--;
		y++;
	}
}
