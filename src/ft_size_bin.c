/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 13:52:33 by pbourmea          #+#    #+#             */
/*   Updated: 2017/06/05 13:53:10 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(double x, unsigned int y)
{
	double	i;
	double	val;

	i = 0;
	val = 1;
	if (y == 0)
		return (1);
	while (i < y)
	{
		val *= x;
		i++;
	}
	return (val);
}

size_t	ft_size_bin(unsigned int value)
{
	size_t	i;
	size_t	total;

	total = 0;
	i = 0;
	while ((total += ft_pow(2, i)) < (size_t)value)
		i++;
	return (i + 1);
}
