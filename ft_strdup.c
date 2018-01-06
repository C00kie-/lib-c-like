/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:42:59 by pbourmea          #+#    #+#             */
/*   Updated: 2017/06/05 13:53:44 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char	*res;
	int		size;

	size = ft_strlen(s1);
	res = malloc(sizeof(char) * (size + 1));
	if (res)
	{
		ft_memcpy(res, s1, size);
		res[size] = '\0';
	}
	return (res);
}
