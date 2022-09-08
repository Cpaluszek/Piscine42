/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:27:39 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 17:29:34 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_digits(int nb);

int	ft_sqrt(int nb)
{
	int	x;
	int	digits;

	x = 1;
	digits = ft_count_digits(nb);
	printf("digits = %i\n", digits);
	while (digits > 2)
	{
		x *= 10;
		digits = digits - 2;
	}
	while (x * x < nb)
	{
		x++;
	}
	if (x * x == nb)
		return (x);
	return (0);
}

int	ft_count_digits(int nb)
{
	int	digits;

	digits = 1;
	while (nb / 10 >= 1)
	{
		nb /= 10;
		digits++;
	}
	return (digits);
}
