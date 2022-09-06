/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:02:48 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/06 09:37:12 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	waiting_next_word;

	i = 0;
	waiting_next_word = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (waiting_next_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			waiting_next_word = 0;
		}
		else
		{
			waiting_next_word = (str[i] >= ' ' && str[i] <= '0');
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
