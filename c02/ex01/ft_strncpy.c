/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:22:46 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/03 16:50:36 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			src_c;
	unsigned int	i;

	src_c = *src;
	i = 0;
	while (i < n)
	{
		*(dest + i) = src_c;
		i++;
		if (src_c == '\0')
		{
			break ;
		}
		src_c = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = src_c;
		i++;
	}
	return (dest);
}
