/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:00:23 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 14:50:48 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int		manage_triplet(t_dict_item *tab, char *in, char *out);
void	manage_remain(t_dict_item *tab, char *in, char *out, int count);
void	manage_single_digit(t_dict_item *tab, char in, char *out);
void	print_pow(t_dict_item *tab, char *out, int pow);

char	*number_to_text(t_dict_item *tab, char *in)
{
	int		i;
	int		triplet_count;
	int		remain_count;
	char	*out;

	if (ft_digit_count(in) < 1)
		return (0);
	out = malloc (sizeof(char) * 50000);
	if (out == 0)
		return (out);
	i = 0;
	triplet_count = ft_digit_count(in) / 3;
	remain_count = ft_digit_count(in) % 3;
	out[0] = '\0';
	if (remain_count != 0)
	{
		manage_remain(tab, in, out, remain_count);
		print_pow(tab, out, triplet_count * 3);
	}
	while (i < triplet_count)
	{
		if (manage_triplet(tab, in + remain_count + ((i++) * 3), out))
			print_pow(tab, out, (triplet_count - i) * 3);
	}
	return (out);
}

void	manage_remain(t_dict_item *tab, char *in, char *out, int count)
{
	int	j;

	j = 0;
	if (count == 2)
	{
		if (in[0] > '1' || in[1] == '0')
		{
			while (tab[j].value[0] != in[0] || tab[j].value[1] != '0')
				j++;
			out = ft_strcat(out, tab[j].text);
			if (in[1] != '0')
			{
				out = ft_strcat(out, " ");
				manage_single_digit(tab, in[1], out);
			}
		}
		else
		{
			while (tab[j].value[0] != in[0] || tab[j].value[1] != in[1])
				j++;
			out = ft_strcat(out, tab[j].text);
		}
	}
	else if (count == 1)
		manage_single_digit(tab, in[0], out);
}

void	print_pow(t_dict_item *tab, char *out, int pow)
{
	int	i;
	int	j;

	i = 0;
	while (i < 41 && pow != 0)
	{
		if (tab[i].value[0] == '1')
		{
			j = 1;
			while (tab[i].value[j] == '0' && j <= pow)
				j++;
			if (j == pow + 1)
			{
				ft_strcat(out, " ");
				ft_strcat(out, tab[i].text);
				ft_strcat(out, " ");
				return ;
			}
		}
		i++;
	}
}

int	manage_triplet(t_dict_item *tab, char *in, char *out)
{
	if (*in != '0')
	{
		manage_remain(tab, in, out, 1);
		print_pow(tab, out, 2);
	}
	if (*(in + 1) != '0')
		manage_remain(tab, in + 1, out, 2);
	else if (*(in + 2) != '0')
		manage_remain(tab, in + 2, out, 1);
	else if (*in == '0' && *(in + 1) == '0' && *(in + 2) == '0')
		return (0);
	return (1);
}

void	manage_single_digit(t_dict_item *tab, char in, char *out)
{
	int	j;

	j = 0;
	while (tab[j].value[0] != in)
			j++;
	out = ft_strcat(out, tab[j].text);
}
