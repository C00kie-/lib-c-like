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

void				*ft_memalloc(size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(ptr = (char *)malloc(size)))
		return (NULL);
	while (ptr && i < size)
		ptr[i++] = 0;
	return ((void *)ptr);
}
