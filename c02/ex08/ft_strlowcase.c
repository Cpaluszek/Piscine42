/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:57:56 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 12:12:12 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	c;
	char	*origin_str;

	origin_str = str;
	c = *str;
	while (c != '\0')
	{
		if (c >= 'A' || c <= 'Z')
			*str += 32;
		str++;
		c = *str;
	}
	return (origin_str);
}
