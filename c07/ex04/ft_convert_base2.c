/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:41:33 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/17 09:53:34 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_slen(char *str);
int		str_contains(char *str, char c);
char	*long_to_base(long nb, char *base_to, int len, int sign);

long	base_to_decimal(char *nbr, char *base_from, int *error)
{
	long	result;
	int		b_len;
	int		i;
	int		j;

	result = 0;
	b_len = ft_slen(base_from);
	i = 0;
	while (nbr[i] && str_contains(base_from, nbr[i]))
	{
		result *= b_len;
		j = 0;
		while (nbr[i] != base_from[j])
			j++;
		result += j;
		i++;
	}
	if (i == 0)
		*error = -1;
	return (result);
}

char	*decimal_to_base(long nbr, char *base_to)
{
	char	*result;
	int		len;
	int		b_len;
	long	x;
	int		sign;

	len = 0;
	sign = 0;
	result = NULL;
	b_len = ft_slen(base_to);
	x = b_len;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
		sign = 1;
	}
	while (x <= nbr)
	{
		x *= b_len;
		len++;
	}
	result = long_to_base(nbr, base_to, len, sign);
	return (result);
}

int	ft_slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*long_to_base(long nb, char *base_to, int len, int sign)
{
	char	*result;
	int		b_len;
	int		i;

	result = malloc (sizeof(char) * (len + 2));
	if (result == 0)
		return (0);
	b_len = ft_slen(base_to);
	i = len;
	if (sign == 1)
		result[0] = '-';
	while ((sign == 0 && i >= 0) || (sign == 1 && i > 0))
	{
		result[i] = base_to[nb % b_len];
		nb /= b_len;
		i--;
	}
	result[len + 1] = '\0';
	return (result);
}
