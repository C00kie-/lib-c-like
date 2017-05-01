/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 18:14:50 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 13:13:03 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL || n < 1)
		return (0);
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		else
			i++;
	}
	return (0);
}
