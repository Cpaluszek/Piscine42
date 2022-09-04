/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:53:52 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/03 17:53:54 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		if (c <= ' ' || c >= '˜')
			return (0);
		str++;
		c = *str;
	}
	return (1);
}
