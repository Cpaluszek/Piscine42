/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:32:58 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 15:09:50 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	main(int argc, char **argv)
{
	char		*output;
	t_dict_item	*dict;

	if (detect_input_errors(argc, argv))
	{
		ft_putstr("Error\n");
		return (1);
	}
	dict = create_dictionnary(readfile(NULL));
	if (dict == 0 || detect_dict_errors(dict))
	{
		ft_putstr("Dict Error\n");
		free(dict);
		return (1);
	}
	output = number_to_text(dict, argv[1]);
	if (output != 0)
		ft_putstr(ft_strcat(output, "\n"));
	else
		ft_putstr("Error\n");
	free(output);
	free(dict);
}
