/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 17:08:59 by pbourmea          #+#    #+#             */
/*   Updated: 2015/06/23 16:42:04 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	char	*s1;
	int		ret;
	int		signe;

	ret = 0;
	signe = 1;
	s1 = (char *)s;
	while (ft_strchr("\t\n\v\f\r ", *s1))
		s1++;
	signe = (*s1 == '-' ? -1 : 1);
	if (*s1 == '-' || *s1 == '+')
		s1++;
	while (*s1 != '\0')
	{
		if (ft_isdigit(*s1) == 0)
			return (ret * signe);
		ret *= 10;
		ret = ret + *s1 - '0';
		s1++;
	}
	return (ret * signe);
}
