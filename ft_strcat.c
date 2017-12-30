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
	int i;
	int start;

	i = 0;
	start = ft_strlen(s1);
	while (s2[i])
	{
		s1[i + start] = s2[i];
		i++;
	}
	s1[i + start] = '\0';
	return (s1);
}
