/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:38:47 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/01 15:49:22 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] <= '7')
	{
		write(1, number, 3);
		if (number[0] != '7')
		{
			write(1, ", ", 2);
		}
		if (number[2] < '9')
		{
			number[2]++;
			continue ;
		}
		else if (number[1] < '8')
		{
			number[2] = ++number[1] + 1;
			continue ;
		}
		number[1] = ++number[0] + 1;
	}
}
