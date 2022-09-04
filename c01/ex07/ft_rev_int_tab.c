/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:29:08 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 14:40:21 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*ptra;
	int	*ptrb;

	i = 0;
	while (i < size / 2)
	{
		ptra = tab + i;
		ptrb = tab + size - 1 - i;
		ft_swap(ptra, ptrb);
		i++;
	}
}
