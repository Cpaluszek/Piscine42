/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:35:55 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/07 12:04:21 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	dest_cursor;
	unsigned int	src_cursor;

	dest_cursor = 0;
	src_cursor = 0;
	while (dest[dest_cursor])
	{
		dest_cursor++;
	}
	while (src[src_cursor] && dest_cursor < n - 1)
	{
		dest[dest_cursor] = src[src_cursor];
		dest_cursor++;
		src_cursor++;
	}
	if (n > 0 && dest_cursor < n)
		dest[dest_cursor] = '\0';
	return (dest_cursor + src_cursor);
}
