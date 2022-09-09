/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:35:21 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/09 08:55:57 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_strings(char **strings, int count);
void	ft_swap_strings(char **s1, char **s2);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	ft_sort_strings(argv + 1, argc - 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

void	ft_sort_strings(char **strings, int count)
{
	int	i;

	i = 0;
	while (i < count - 1)
	{
		if (ft_strcmp(strings[i], strings[i + 1]) > 0)
		{
			ft_swap_strings(&strings[i], &strings[i + 1]);
			ft_sort_strings(strings, count);
		}
		i++;
	}
}

void	ft_swap_strings(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i])
	{
		if (s1[i] - s2[i] != 0)
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
