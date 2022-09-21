/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_dict_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:51:16 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 15:51:00 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	detect_dict_errors(t_dict_item *tab)
{
	if (detect_double_value(tab) == 1)
		return (1);
	if (detect_empty_text(tab) == 1)
		return (1);
	if (detect_missing_value(tab) == 1)
		return (1);
	return (0);
}

int	detect_double_value(t_dict_item *tab)
{
	(void) tab;
	return (0);
}

int	detect_empty_text(t_dict_item *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 41)
	{
		j = 0;
		while (tab[i].text[j])
			j++;
		if (j == 1)
			return (1);
		i++;
	}	
	return (0);
}

int	detect_missing_value(t_dict_item *tab)
{
	(void) tab;
	return (0);
}
