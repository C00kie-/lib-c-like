/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 20:03:36 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/22 17:21:31 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;
	size_t	n;

	dest = (char *)malloc(sizeof(char) * size + 1);
	n = 0;
	while (dest + n != NULL && n <= size)
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}
