/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 08:17:55 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/06 10:20:43 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size != 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

int	ft_strlen(char *str)
{
	int		length;
	char	c;

	length = 0;
	c = *str;
	while (c != '\0')
	{
		str++;
		c = *str;
		length++;
	}
	return (length);
}
