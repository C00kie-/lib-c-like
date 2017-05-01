/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 20:13:49 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/21 15:00:43 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	size_t	len;
	size_t	i;

	if (s == NULL || *f == NULL)
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
