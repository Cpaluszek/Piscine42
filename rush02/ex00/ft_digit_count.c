/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:17:25 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 14:21:07 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_digit_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
