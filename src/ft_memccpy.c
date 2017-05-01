/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 14:03:38 by pbourmea          #+#    #+#             */
/*   Updated: 2014/12/03 16:49:32 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	while (n--)
	{
		if (*s2 == c)
		{
			*s1++ = *s2++;
			return (s1);
		}
		else
			*s1++ = *s2++;
	}
	return (NULL);
}
