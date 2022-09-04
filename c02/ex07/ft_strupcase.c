/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:55:28 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 12:11:53 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	char	c;
	char	*origin_str;

	origin_str = str;
	c = *str;
	while (c != '\0')
	{
		if (c >= 'a' || c <= 'z')
			*str -= 32;
		str++;
		c = *str;
	}
	return (origin_str);
}
