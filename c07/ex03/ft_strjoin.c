/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:06:36 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/16 08:31:19 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlength(char *str);
int		get_tot_len(char **strs, char *sep, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		tot_len;
	int		sep_needed;

	join = NULL;
	i = 0;
	sep_needed = 0;
	if (size < 1 || sep == NULL || strs == NULL)
		return (join);
	tot_len = get_tot_len(strs, sep, size);
	join = (char *) malloc (sizeof(char) * (tot_len + 1));
	if (join == 0)
		return (join);
	join[0] = '\0';
	join[tot_len] = '\0';
	while (i < size)
	{
		if (sep_needed-- == 1)
			join = ft_strcat(join, sep);
		if (ft_strlength(join) != ft_strlength(ft_strcat(join, strs[i++])))
			sep_needed = 1;
	}
	return (join);
}

int	get_tot_len(char **strs, char *sep, int size)
{
	int	len;
	int	i;
	int	s_count;

	len = 0;
	i = 0;
	s_count = 0;
	while (i < size)
	{
		if (ft_strlength(strs[i]) != 0)
		{
			s_count++;
			len += ft_strlength(strs[i]);
		}
		i++;
	}
	len += ft_strlength(sep) * (s_count - 1);
	return (len);
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
