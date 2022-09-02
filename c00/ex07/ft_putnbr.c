/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:17:10 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/02 14:33:32 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int nb)
{
	char	c;
	int		unit;

	c = '0';
	if (nb < 0)
	{
		nb = nb * -1 -1;
		c = '-';
	}
	else if (nb >= 10)
	{
		unit = nb % 10;
		nb = nb / 10;
		c = '0' + unit;
	}
	else
	{
		c = '0' + nb;
		nb = 0;
	}
	if (nb != 0)
	{
		ft_putnbr(nb);
	}
	write(1, &c, 1);
}
