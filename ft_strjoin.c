/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 14:51:28 by pbourmea          #+#    #+#             */
/*   Updated: 2015/06/23 16:48:27 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	len = 0;
	dest = NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1)
		len = ft_strlen(s1);
	if (s2)
		len = len + ft_strlen(s2);
	dest = ft_strnew(len + 1);
	if (s1)
		dest = ft_strcpy(dest, s1);
	if (s2)
		dest = ft_strcat(dest, s2);
	return (dest);
}
