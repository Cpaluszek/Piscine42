/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:36:40 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/07 12:03:50 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int		str_cursor;

	str_cursor = 0;
	while (str[str_cursor])
	{
		if (str[str_cursor] == to_find[0])
		{
			if (ft_strcmp(str + str_cursor, to_find) == 0)
				return (&str[str_cursor]);
		}
		str_cursor++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i])
	{
		if (s1[i] - s2[i] != 0)
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
