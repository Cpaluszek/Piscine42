/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:02:48 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 14:03:55 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	char	c;
	char	*origin_str;
	int		word_done;

	//ft_strlowcase(str);
	word_done = 0;
	origin_str = str;
	c = *str;
	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{ 
			if(!word_done)
			{
				*str -= 32;
				word_done = 1;
			}
		}
		else if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		{
			word_done = 1;
		}
		else if (c >= 'A' && c <= 'Z')
			word_done = 1;
		else 
			word_done = 0;
		str++;
		c = *str;
	}
	return (origin_str);
}

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
