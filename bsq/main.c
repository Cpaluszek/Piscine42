/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:02:39 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 17:55:11 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{
	int		count;
	t_map	map;

	count = 1;
	if (argc == 1)
		count = 0;
	while (count < argc)
	{
		if (generate_map(argv[count], &map, count == 0))
			ft_putstr("map error", STDERR_FILENO);
		else
		{
			if (solve(&map) == 1)
				ft_putstr("map error", STDERR_FILENO);
			else
			{
				print(map);
				annihilation(&map);
			}
		}
		count++;
	}
	return (0);
}
