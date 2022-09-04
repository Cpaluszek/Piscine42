/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utimate_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:36:53 by cpalusze          #+#    #+#             */
/*   Updated: 2022/09/04 15:18:06 by cpalusze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	mod;

	result = *a / *b;
	mod = *a % *b;
	*a = result;
	*b = mod;
}
