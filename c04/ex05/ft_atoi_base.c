/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:14:09 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/07 09:59:21 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ')
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
