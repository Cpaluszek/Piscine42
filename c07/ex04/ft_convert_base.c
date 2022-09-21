/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:19:33 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/17 09:53:32 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_whitespace(char c);
int		check_base(char *base);
long	base_to_decimal(char *nbr, char *base_from, int *error);
char	*decimal_to_base(long nbr, char *base_to);
int		str_contains(char *str, char c);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	dec_nbr;
	int		sign;
	int		i;

	result = NULL;
	if (!check_base(base_from) || !check_base(base_to) || nbr == NULL)
		return (result);
	i = 0;
	while (nbr[i] && check_whitespace(nbr[i]))
		i++;
	sign = 0;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign++;
		i++;
	}
	dec_nbr = base_to_decimal(nbr + i, base_from, &i);
	if (i == -1)
		return (result);
	if (sign % 2 == 1)
		dec_nbr *= -1;
	result = decimal_to_base(dec_nbr, base_to);
	return (result);
}

int	check_base(char *base)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (base == NULL)
		return (0);
	while (base[len])
		len++;
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || check_whitespace(base[i]))
			return (0);
		if (i < len - 1)
			if (str_contains(base + i + 1, base[i]))
				return (0);
		i++;
	}
	return (1);
}

int	check_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' \
		|| c == '\t' || c == '\v');
}

int	str_contains(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
