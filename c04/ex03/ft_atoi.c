/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:14:09 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 11:55:58 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_whitespace(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		result *= -1;
	return (result);
}

int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' \
		|| c == '\t' || c == '\v');
}
