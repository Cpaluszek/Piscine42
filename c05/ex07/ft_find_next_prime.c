/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:30:38 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 17:36:26 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	result;

	result = 0;
	while (!result)
	{
		nb++;
		if (nb % 2 == 1)
			result = ft_is_prime(nb);
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (0);
	x = 2;
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
