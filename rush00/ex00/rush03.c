/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:45:04 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/04 17:47:05 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_pick_char(int a, int c, int middle);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	a;
	int	c;
	int	middle;

	if (x > 0 && y > 0)
	{	
		i = 1;
		j = 1;
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				a = ((i == 1 && j == 1) || (i == 1 && j == y));
				c = ((i == x && j == 1) || (j == y && i == x));
				middle = ((i > 1 && i < x) && (j > 1 && j < y));
				ft_pick_char(a, c, middle);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}	
}

void	ft_pick_char(int a, int c, int middle)
{
	if (a)
	{
		ft_putchar('A');
	}
	else if (c)
	{
		ft_putchar('C');
	}
	else if (middle)
	{
		ft_putchar(' ');
	}
	else
		ft_putchar('B');
}
