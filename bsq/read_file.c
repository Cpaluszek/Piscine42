/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:16:23 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 17:40:30 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	print_error(char *content)
{
	if (check_error(content) == 1)
	{
		free(content);
		return (1);
	}
	return (0);
}

char	*read_file(char *path)
{
	int		file_d;
	char	*content;
	int		file_len;

	file_len = get_file_len(path);
	if (file_len < 1)
		return (NULL);
	content = malloc((file_len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	file_d = open(path, O_RDONLY);
	if (file_d == -1 || (read(file_d, content, file_len) == -1))
	{
		free(content);
		return (NULL);
	}
	content[file_len] = '\0';
	if (close(file_d) == -1)
	{
		free(content);
		return (NULL);
	}	
	if (print_error(content) == 1)
		return (NULL);
	return (content);
}

int	get_file_len(char *path)
{
	int		i;
	char	buf;
	int		file_d;

	i = 0;
	buf = 0;
	file_d = open(path, O_RDONLY);
	if (file_d == -1)
		return (-1);
	i = 0;
	while (read(file_d, &buf, 1) > 0)
		i++;
	if (close(file_d) == -1)
		return (-1);
	return (i);
}

void	annihilation(t_map *map)
{
	int	i;

	i = 0;
	if (map == NULL)
		return ;
	while (i < map->row)
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
}
