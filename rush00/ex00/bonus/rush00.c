/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:04:39 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 10:10:41 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_pick_char(int top_bot, int left, int right);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	top_bot;
	int	left;
	int	right;

	if (x > 0 && y > 0)
	{	
		i = 1;
		j = 1;
		while (j <= y)
		{
			top_bot = (j == 1 || j == y);
			i = 1;
			while (i <= x)
			{
				right = (i == x);
				left = (i == 1);
				ft_pick_char(top_bot, left, right);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}	
}

void	ft_pick_char(int top_bot, int left, int right)
{
	if (top_bot)
	{
		if (left || right)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (left || right)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}	
}
