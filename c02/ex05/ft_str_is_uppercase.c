/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:49:12 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/03 17:50:29 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		if (c <= 'A' || c >= 'Z')
			return (0);
		str++;
		c = *str;
	}
	return (1);
}
