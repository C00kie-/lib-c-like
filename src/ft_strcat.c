/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 17:40:24 by pbourmea          #+#    #+#             */
/*   Updated: 2014/11/26 17:48:23 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dest;

	if (s1 != NULL && s2 != NULL)
	{
		dest = s1;
		while (*s1 != '\0')
			s1++;
		while (*s2 != '\0')
			*s1++ = *s2++;
		*s1 = '\0';
		return (dest);
	}
	return (NULL);
}
