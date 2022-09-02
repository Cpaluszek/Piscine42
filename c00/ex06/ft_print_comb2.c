/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:04:22 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/01 18:36:40 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

char	ft_ten_to_char(int nb)
{
	if (nb >= 10)
	{
		return ('0' + nb / 10);
	}
	return ('0');
}

void	ft_print_chars(int first, int second)
{
	char	a_unit;
	char	a_ten;
	char	b_unit;
	char	b_ten;

	a_unit = '0' + first % 10;
	a_ten = ft_ten_to_char(first);
	b_unit = '0' + second % 10;
	b_ten = ft_ten_to_char(second);
	write(1, &a_ten, 1);
	write(1, &a_unit, 1);
	write(1, " ", 1);
	write(1, &b_ten, 1);
	write(1, &b_unit, 1);
	if (first != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 99)
	{
		while (second <= 99)
		{
			if (first < second)
			{
				ft_print_chars(first, second);
			}
			second++;
		}
		second = ++first + 1;
	}
}
