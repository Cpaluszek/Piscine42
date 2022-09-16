/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:34:49 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/16 11:33:25 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *src, char *dest);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = malloc (sizeof(t_stock_str) * ac + 1);
	if (result == NULL)
		return (result);
	while (i < ac)
	{
		result[i].str = malloc (sizeof(char) * (ft_strlen(av[i]) + 1));
		if (result[i].str == NULL)
			return (NULL);
		result[i].str = av[i];
		result[i].size = ft_strlen(av[i]);
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
			return (NULL);
		i++;
	}
	result[i].str = 0;
	return (result);
}

char	*ft_strdup(char *src)
{
	char	*cp;
	int		length;

	length = ft_strlen(src) + 1;
	cp = (char *) malloc (length * sizeof(char));
	if (cp == 0)
		return (0);
	cp = ft_strcpy(src, cp);
	return (cp);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
