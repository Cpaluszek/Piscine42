/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:22:58 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/06 17:52:50 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_cursor;
	unsigned int	src_cursor;

	dest_cursor = 0;
	src_cursor = 0;
	while (dest[dest_cursor])
	{
		dest_cursor++;
	}
	while (src[src_cursor] && src_cursor < nb)
	{
		dest[dest_cursor] = src[src_cursor];
		dest_cursor++;
		src_cursor++;
	}
	return (dest);
}
