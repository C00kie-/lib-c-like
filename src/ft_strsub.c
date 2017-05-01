/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 20:05:37 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/22 18:32:02 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (s != NULL)
	{
		dest = ft_strnew(len);
		i = 0;
		if (dest == NULL)
			return (NULL);
		while (i < len)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
		return (dest);
	}
	return (NULL);
}
