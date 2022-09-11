/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:31:58 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/09 13:49:59 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (size < 1)
		return (0);
	tab = (int *) malloc (size * sizeof(int));
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
