/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_input_errors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:05:13 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 15:10:21 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	detect_input_errors(int argc, char **argv)
{
	int	i;
	int	number_index;

	i = 0;
	number_index = 1;
	if (argc == 1 || argc > 2)
		return (1);
	while (argv[number_index][i])
	{
		if (argv[number_index][i] < '0' || argv[number_index][i] > '9')
			return (1);
		i++;
	}
	return (0);
}
