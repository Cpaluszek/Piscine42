/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:00:05 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/05 11:25:42 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (s2[i])
	{
		result += s1[i] - s2[i];
		if (result != 0)
			break ;
		i++;
	}
	return (result);
}
