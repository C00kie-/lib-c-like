/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 17:38:57 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:11:55 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	// unsigned char *str;
    //
	// str = malloc(sizeof(*str) * len);
	// if (!str)
	// 	return (NULL);
// 	ft_memcpy(str, src, len);
// 	ft_memcpy(dest, str, len);
// 	// free(str);
// 	return (dest);
// }
//
unsigned char	*psrc;
	unsigned char	*pdest;
	size_t			i;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	i = -1;
	if (dest > src && dest < sizeof(char) * len + src)
	{
		while (len--)
			pdest[len] = psrc[len];
	}
	else
		while (++i < len)
			pdest[i] = psrc[i];
	return (dest);
}
