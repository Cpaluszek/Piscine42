/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:32:38 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 12:22:09 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_str_contains(char *s1, char c);
void	ft_printnbr_base(int nbr, char *base, int len);

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return ;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		if (i < len - 1)
			if (ft_str_contains(base + i + 1, base[i]))
				return ;
		i++;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_printnbr_base(nbr, base, len);
}

void	ft_printnbr_base(int nbr, char *base, int len)
{
	if (nbr >= len)
		ft_printnbr_base(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

//Check if the string s1 contains the char c
int	ft_str_contains(char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
