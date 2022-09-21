/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dictionnary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:59:49 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 14:31:00 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int			count_dict_lines(char *str);
t_dict_item	*alloc_struct(char *str, t_dict_item *tab, int line_count);
void		fill_stuct(char *str, t_dict_item *tab, int line_count, int cell);

t_dict_item	*create_dictionnary(char *str)
{
	t_dict_item	*tab;
	int			line_count;

	tab = 0;
	line_count = count_dict_lines(str);
	if (line_count == -1)
		return (tab);
	tab = malloc (sizeof(t_dict_item) * line_count);
	if (tab == 0)
		return (tab);
	tab = alloc_struct(str, tab, line_count);
	if (tab == 0)
		return (tab);
	fill_stuct(str, tab, line_count, 0);
	return (tab);
}

int	count_dict_lines(char *str)
{
	int	i;
	int	lines;

	i = 0;
	lines = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] != '\n')
				i++;
			lines++;
		}
		i++;
	}
	if (lines < 41)
		return (-1);
	return (lines);
}

void	fill_stuct(char *str, t_dict_item *tab, int line_count, int cell)
{
	int	i;
	int	len;

	i = 0;
	while (str[i] && cell < line_count)
	{
		len = 0;
		while (str[i + len] && (str[i + len] >= '0' && str[i + len] <= '9'))
		{
			tab[cell].value[len] = str[i + len];
			len++;
		}
		tab[cell].value[len] = '\0';
		while (str[i + len] && (str[i + len] == ' ' || str[i + len] == ':'))
			len++;
		i += len;
		len = 0;
		while (str[i + len] && (str[i + len] >= 'a' && str[i + len] <= 'z'))
		{
			tab[cell].text[len] = str[i + len];
			len++;
		}
		tab[cell++].text[len] = '\0';
		i += len + 1;
	}
}

t_dict_item	*alloc_struct(char *str, t_dict_item *tab, int line_count)
{
	int	i;
	int	cell;
	int	len;

	i = 0;
	cell = 0;
	while (str[i] && cell < line_count)
	{
		len = 0;
		while (str[i + len] && (str[i + len] >= '0' && str[i + len] <= '9'))
			len++;
		tab[cell].value = malloc (sizeof(char) * (len + 1));
		while (str[i + len] && (str[i + len] == ' ' || str[i + len] == ':'))
			len++;
		i += len;
		len = 0;
		while (str[i + len] && (str[i + len] >= 'a' && str[i + len] <= 'z'))
			len++;
		tab[cell].text = malloc (sizeof(char) * (len + 1));
		if (tab[cell].value == 0 || tab[cell].text == 0)
			return (0);
		cell++;
		i += len + 1;
	}
	return (tab);
}
