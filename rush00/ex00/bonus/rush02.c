/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:39:55 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 17:13:54 by dkeyghob         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_pick_char(int top_bot, int left, int right);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	is_a;
	int	is_c;
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
				is_a = ((i == 1 && j == 1) || (i == x && j == 1));
				is_c = ((i == 1 && j == y) || (i == x && j == y));
				middle = ((i > 1 && i < x) && (j > 1 && j < y));
				ft_pick_char(is_a, is_c, middle);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}	
}

void	ft_pick_char(int is_a, int is_c, int middle)
{
	if (is_a)
	{
		ft_putchar('A');
	}
	else if (is_c)
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
