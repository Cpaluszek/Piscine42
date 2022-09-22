/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:12:59 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/22 14:19:57 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strcontains(char *str, char *sep);
char	*ft_strncpy(char *dest, char *src, unsigned int n, char *sep);
int		ft_len(char *str);
char	**splitter(char *str, char *charset, int s_count, int offset);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		s_count;
	int		i;
	int		offset;

	i = 0;
	s_count = 2;
	if (charset == NULL || str == NULL)
		return (NULL);
	while (str[i++])
	{
		offset = ft_strcontains(str + i - 1, charset);
		if (offset > 0)
		{
			i += offset;
			while (str[i] && ft_strcontains(str + i, charset) == 0)
				i++;
			if (str[i] == '\0')
				break ;
			s_count++;
		}
	}
	result = splitter(str, charset, s_count, offset);
	result[s_count - 1] = 0;
	return (result);
}

char	**splitter(char *str, char *charset, int s_count, int offset)
{
	char	**res;
	int		i;
	int		j;

	res = malloc (sizeof(char *) * s_count);
	if (res == 0)
		return (res);
	i = 0;
	j = 0;
	while (str[i])
	{
		offset = ft_strcontains(str + i, charset);
		if (offset > 0 || j == s_count - 2)
		{
			if (j++ == s_count - 2)
				offset = ft_len(str + i);
			res[j - 1] = malloc (sizeof(char) * (offset + 1));
			if (res[j - 1] == 0)
				return (res);
			res[j - 1] = ft_strncpy(res[j - 1], str + i, offset + 1, charset);
		}
		i += offset + 1;
	}
	res[s_count - 1] = 0;
	return (res);
}

int	ft_strcontains(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (sep[j])
		{
			if (str[i] == sep[j] && sep[j] != '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n, char *sep)
{
	unsigned int	i;
	int				j;

	i = 0;
	while ((i < n - 1) && src[i] != '\0')
	{
		j = 0;
		while (sep[j])
		{
			if (sep[j] == src[i])
			{
				dest[i] = '\0';
				return (dest);
			}
			j++;
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
