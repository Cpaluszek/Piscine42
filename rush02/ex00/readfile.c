/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:43:09 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 15:12:09 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	get_size(char *path);

char	*readfile(char *path)
{
	int		size;
	int		file;
	char	*file_content;

	file_content = 0;
	if (path == NULL)
		path = PATH;
	size = get_size(path);
	if (size == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	file_content = malloc (sizeof(char) * (size + 1));
	if (file_content == 0)
		return (file_content);
	file = open(path, O_RDONLY);
	if (file == -1)
		return (file_content);
	read(file, file_content, size);
	file_content[size] = '\0';
	return (file_content);
}

int	get_size(char *path)
{
	int		size;
	char	c;
	int		file;

	size = 0;
	c = 0;
	file = open(path, O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, &c, 1))
		size++;
	close(file);
	return (size);
}
