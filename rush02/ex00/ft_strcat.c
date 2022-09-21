/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:00:38 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/18 11:02:54 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h" 

char	*ft_strcat(char *dest, char *src)
{
	int	d_cursor;
	int	s_cursor;

	d_cursor = 0;
	s_cursor = 0;
	while (dest[d_cursor])
		d_cursor++;
	while (src[s_cursor])
	{
		dest[d_cursor] = src[s_cursor];
		d_cursor++;
		s_cursor++;
	}
	dest[d_cursor] = '\0';
	return (dest);
}
