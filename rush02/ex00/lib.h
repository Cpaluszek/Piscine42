/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:33:32 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 16:49:40 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define PATH "dict/numbers.dict"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_dict_item
{
	char	*value;
	char	*text;
}	t_dict_item;

void				ft_putstr(char *str);
void				ft_putchar(char c);
int					detect_input_errors(int argc, char **argv);
char				*readfile(char *path);
t_dict_item			*create_dictionnary(char *str);
int					detect_dict_errors(t_dict_item *tab);
int					detect_double_value(t_dict_item *tab);
int					detect_empty_text(t_dict_item *tab);
int					detect_missing_value(t_dict_item *tab);
char				*number_to_text(t_dict_item *tab, char *input);
char				*ft_strcat(char *dest, char *src);
int					ft_digit_count(char *str);
#endif
