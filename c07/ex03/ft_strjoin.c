/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:06:36 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/13 11:18:37 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlength(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		tot_len;

	join = NULL;
	if (size < 1)
		return (0);
	i = 0;
	tot_len = 0;
	while (i < size)
		tot_len += ft_strlength(strs[i++]);
	tot_len += ft_strlength(sep) * (i - 1);
	join = (char *) malloc (sizeof(char) * (tot_len + 1));
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i != 0)
			join = ft_strcat(join, sep);
		join = ft_strcat(join, strs[i]);
		i++;
	}
	return (join);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d_cursor;
	int	s_cursor;

	d_cursor = 0;
	s_cursor = 0;
	while (dest[d_cursor])
		d_cursor++;
	while (src[s_cursor])
		dest[d_cursor++] = src[s_cursor++];
	dest[d_cursor] = '\0';
	return (dest);
}

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
