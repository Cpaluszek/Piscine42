/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:13:52 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 10:46:42 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_pick_char(int slash, int backslash, int middle);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	slash;
	int	backslash;
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
				slash = ((i == 1 && j == 1) || (i == x && j == y));
				backslash = ((i == x && j == 1) || (j == y && i == 1));
				middle = ((i > 1 && i < x) && (j > 1 && j < y));
				ft_pick_char(slash, backslash, middle);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}	
}

void	ft_pick_char(int slash, int backslash, int middle)
{
	if (slash)
	{
		ft_putchar('/');
	}
	else if (backslash)
	{
		ft_putchar('\\');
	}
	else if (middle)
	{
		ft_putchar(' ');
	}
	else
		ft_putchar('*');
}
