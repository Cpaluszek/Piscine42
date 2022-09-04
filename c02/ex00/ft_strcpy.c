/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:57:03 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/03 15:20:31 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	src_c;
	int		i;

	src_c = *src;
	i = 0;
	while (src_c != '\0')
	{
		*(dest + i) = src_c;
		i++;
		src_c = *(src + i);
	}
	return (dest);
}
