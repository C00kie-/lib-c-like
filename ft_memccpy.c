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
	while (n--)
	{
		if (*(unsigned char*)src == (unsigned char)c)
		{
			*(unsigned char*)dest++ = *(unsigned char *)src++;
			return ((unsigned char*)dest);
		}
		else
			*(unsigned char *)dest++ = *(unsigned char*)src++;
	}
	return (NULL);
}
