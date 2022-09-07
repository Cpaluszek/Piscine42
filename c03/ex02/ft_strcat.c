/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:43:21 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/07 11:42:02 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	dest_cursor;
	int	src_cursor;

	dest_cursor = 0;
	src_cursor = 0;
	while (dest[dest_cursor])
	{
		dest_cursor++;
	}
	while (src[src_cursor])
	{
		dest[dest_cursor] = src[src_cursor];
		dest_cursor++;
		src_cursor++;
	}
	dest[dest_cursor] = '\0';
	return (dest);
}
