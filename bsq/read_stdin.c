/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:49:25 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/20 18:27:46 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*read_stdin(void)
{
	char	buf[50000];
	char	*content;
	int		i;

	i = 0;
	content = NULL;
	while (read(STDIN_FILENO, &buf[i], 1))
		i++;
	buf[i] = '\0';
	content = ft_strdup(buf);
	if (content == 0 || print_error(content) == 1)
		return (NULL);
	return (content);
}

char	*ft_strdup(char *src)
{
	char	*cp;
	int		length;

	length = ft_strlen(src) + 1;
	cp = (char *) malloc (length * sizeof(char));
	if (cp == 0)
		return (0);
	cp = ft_strcpy(src, cp);
	return (cp);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
