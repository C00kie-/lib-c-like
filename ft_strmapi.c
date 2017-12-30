/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 20:14:30 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:14:11 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*dest;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		if ((dest = malloc(sizeof(char) * len + 1)) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			dest[i] = (*f)(i, (char)s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
