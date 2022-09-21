/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:06:36 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/21 08:20:11 by cpalusze         ###   ########lyon.fr   */
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

	i = 0;
	if (size < 1 || sep == NULL || strs == NULL)
	{
		join = malloc (sizeof(char) * 1);
		return (join);
	}
	tot_len = get_tot_len(strs, sep, size);
	join = (char *) malloc (sizeof(char) * (tot_len + 1));
	if (join == 0)
		return (join);
	join[0] = '\0';
	join[tot_len] = '\0';
	while (i < size)
	{
		if (i != 0)
			join = ft_strcat(join, sep);
		ft_strcat(join, strs[i]);
		i++;
	}
	return (join);
}

int	get_tot_len(char **strs, char *sep, int size)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlength(strs[i++]);
	len += ft_strlength(sep) * (i - 1);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d_c;
	int	s_c;

	d_c = 0;
	s_c = 0;
	while (dest[d_c])
		d_c++;
	while (src[s_c])
		dest[d_c++] = src[s_c++];
	dest[d_c] = 0;
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
