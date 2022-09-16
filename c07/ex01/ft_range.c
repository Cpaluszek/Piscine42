/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:31:58 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/16 08:11:10 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	size;
	long	value;
	long	i;

	size = max - min;
	if (size < 1)
		return (0);
	tab = malloc (size * sizeof(int));
	if (tab == 0)
		return (tab);
	i = 0;
	value = min;
	while (value < max)
	{
		tab[i++] = value;
		value++;
	}
	return (tab);
}
