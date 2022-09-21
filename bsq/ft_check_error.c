/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:21:00 by eslamber          #+#    #+#             */
/*   Updated: 2022/09/20 13:32:02 by eslamber         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check_lines(char *content, int i, int nb)
{
	int	count;
	int	len;
	int	check;

	count = 0;
	len = 0;
	check = 0;
	while (content[i] != '\0')
	{
		len++;
		if (content[i] == '\n')
		{
			if (check == 0)
				check = len;
			else if (len != check)
				return (1);
			len = 0;
			count++;
		}
		i++;
	}
	if (count != nb)
		return (1);
	return (0);
}

int	check_chars(char a, char b, char c, char *content)
{
	int	i;

	i = 0;
	if (a == b || a == c || b == c)
		return (1);
	if (a < ' ' || b < ' ' || c < ' ')
		return (1);
	while (content[i] != '\n')
		i++;
	i++;
	while (content[i] != '\0')
	{
		if (content[i] != a && content[i] != b && content[i] != '\n')
			return (1);
		if (content[i] == c && content[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

int	check_error(char *content)
{
	int	i;
	int	nb;
	int	count;

	i = 0;
	if (ft_strlen(content) < 7)
		return (1);
	while (content[i] >= '0' && content[i] <= '9' && content[i + 3] != '\n')
		i++;
	if (i == 0)
		return (1);
	nb = atoi_n(content, i);
	if (check_chars(content[i], content[i + 1], content[i + 2], content) == 1)
		return (1);
	count = 0;
	i += 4;
	if (check_lines(content, i, nb) == 1)
		return (1);
	return (0);
}
