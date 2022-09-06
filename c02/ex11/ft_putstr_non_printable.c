/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 08:44:38 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/06 10:23:40 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_char_to_hex(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			ft_char_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_char_to_hex(char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar('\\');
	if (c >= 16)
	{
		ft_putchar(hex_base[c / 16]);
		ft_putchar(hex_base[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex_base[(int)c]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
