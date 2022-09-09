/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:40:18 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/09 09:55:25 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*prog_name;
	int		i;

	(void)argc;
	prog_name = argv[0];
	i = 0;
	while (prog_name[i])
	{
		ft_putchar(prog_name[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
