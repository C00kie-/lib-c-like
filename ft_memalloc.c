/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 19:51:06 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/21 13:45:11 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*dest;
	size_t	n;

	if (size == 0)
		return (NULL);
	if ((dest = malloc(sizeof(char *) * size)) == NULL)
		return (NULL);
	n = 0;
	if (dest != NULL)
	{
		while (n < size)
		{
			ft_memset(dest, 0, size);
			n++;
		}
	}
	return (dest);
}
