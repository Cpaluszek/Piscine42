/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:12:59 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/14 12:14:16 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strcontains(char *str, char *sep);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_len(char *str);
int		count_strings(char *str, char *charset, int s_count);
char	**splitter(char *str, char *charset, int s_count);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		s_count;
	int		i;
	int		offset;

	i = 0;
	s_count = 2;
	while (str[i++])
	{
		offset = ft_strcontains(str + i - 1, charset);
		if (offset > 0)
		{
			s_count++;
			i += offset;
		}
	}
	result = splitter(str, charset, s_count);
	result[s_count - 1] = NULL;
	return (result);
}

char	**splitter(char *str, char *charset, int s_count)
{
	char	**result;
	int		i;
	int		j;
	int		offset;

	result = malloc (sizeof(char *) * s_count);
	if (result == 0)
		return (result);
	i = 0;
	j = 0;
	while (str[i++])
	{
		offset = ft_strcontains(str + i - 1, charset);
		if (offset > 0 || j == s_count - 2)
		{
			if (j++ == s_count - 2)
				offset = ft_len(str + i - 1);
			result[j - 1] = malloc (sizeof(char) * (offset + 1));
			if (result[j - 1] == 0)
				return (result);
			result[j - 1] = ft_strncpy(result[j - 1], str + i - 1, offset + 1);
			i += offset;
		}
	}
	return (result);
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n - 1) && src[i] != '\0')
	{
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
