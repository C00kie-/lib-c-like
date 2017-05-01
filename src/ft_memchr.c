/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 16:03:42 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/20 17:35:18 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char *chaine;

	if (s != NULL)
	{
		chaine = (unsigned char*)s;
		i = 0;
		while (i < n)
		{
			if (chaine[i] == (unsigned char)c)
				return ((unsigned char *)chaine + i);
			else
				i++;
		}
	}
	return (NULL);
}
