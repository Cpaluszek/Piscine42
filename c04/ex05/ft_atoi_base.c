/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:30:27 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 13:10:46 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(char c);
int	ft_str_contains(char *s1, char c);
int	ft_ascii_to_base(char *str, char *base, int len);
int	ft_loop_through_base(char *str, char *base, int len);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (base[len])
		len++;
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_whitespace(base[i]))
			return (0);
		if (i < len - 1)
			if (ft_str_contains(base + i + 1, base[i]))
				return (0);
		i++;
	}
	return (ft_ascii_to_base(str, base, len));
}

int	ft_ascii_to_base(char *str, char *base, int len)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	while (ft_is_whitespace(str[i]) && str[i])
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	result = ft_loop_through_base(&str[i], base, len);
	if (sign % 2 == 1)
		result *= -1;
	return (result);
}

int	ft_loop_through_base(char *str, char *base, int len)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (ft_is_whitespace(str[i]) && str[i])
		i++;
	while (ft_str_contains(base, str[i]) && str[i])
	{
		result *= len;
		while (str[i] != base[j])
			j++;
		result += j;
		i++;
		j = 0;
	}
	return (result);
}

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

int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' \
		|| c == '\t' || c == '\v');
}
