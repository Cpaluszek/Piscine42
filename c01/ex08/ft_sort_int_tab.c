/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:41:18 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/02 13:53:16 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	*ptra;
	int	*ptrb;
	int	swapped;

	swapped = 0;
	i = 0;
	while (i < size - 1)
	{
		ptra = tab + i;
		ptrb = tab + i + 1;
		if (*ptra > *ptrb)
		{
			ft_swap(ptra, ptrb);
			swapped = 1;
		}
		i++;
	}
	if (swapped == 1)
	{
		ft_sort_int_tab(tab, size);
	}
}
