/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:39:37 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/07 12:03:27 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s2[i] && i < n)
	{
		if (s1[i] - s2[i] != 0)
			break ;
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
