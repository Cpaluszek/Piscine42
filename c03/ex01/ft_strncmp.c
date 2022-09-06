/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:39:37 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/06 10:42:46 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	result = 0;
	while (s2[i] && i < n)
	{
		result += s1[i] - s2[i];
		if (result != 0)
			break ;
		i++;
	}
	return (result);
}
