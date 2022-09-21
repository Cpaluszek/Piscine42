/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:23:13 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 18:07:03 by cpalusze         ###   ########lyon.fr   */
/*   Updated: 2022/09/19 13:50:09 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_map
{
	int		row;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}	t_map;

char	*read_file(char *path);
char	*read_stdin(void);
int		get_file_len(char *path);
int		generate_map(char *path, t_map *map, int get_stdin);
int		atoi_n(char *str, int n);
void	ft_putstr(char *str, int mod);
char	*ft_strcpy(char *src, char *dest);
char	*ft_strdup(char *src);
void	print(t_map map);
int		ft_strlen(char *str);
char	**allocate_array(char *content, int row, int i);
char	**fill_array(char *content, char **array, int i);
int		print_error(char *content);
int		check_error(char *content);
int		check_chars(char a, char b, char c, char *content);
int		check_lines(char *content, int i, int nb);
int		min(int a, int b);
void	init_map(t_map *map);
void	annihilation(t_map *map);
int		solve(t_map *map);
int		**allocate_int_map(t_map map);
void	setup_int_map(t_map map, int **int_map);
int		big_brain(int **map, int row, int len, int max);
void	find_biggest_square(t_map *map, int **i_map, int max);
void	draw_square(t_map *map, int i, int j, int size);

#endif
