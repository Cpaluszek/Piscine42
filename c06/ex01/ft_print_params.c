/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:05:22 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/08 18:09:06 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*content;
	int		arg_nb;
	int		i;

	arg_nb = 1;
	while (arg_nb < argc)
	{
		i = 0;
		content = argv[arg_nb];
		while (content[i])
		{
			ft_putchar(content[i]);
			i++;
		}
		ft_putchar('\n');
		arg_nb++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
