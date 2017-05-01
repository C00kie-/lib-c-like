/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 20:02:27 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/21 15:13:50 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			i++;
		}
		else
			return (0);
	}
	return (1);
}
