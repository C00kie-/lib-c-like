/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 13:54:02 by pbourmea          #+#    #+#             */
/*   Updated: 2017/06/05 14:01:47 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t size)
{
	char *str;

	str = malloc(sizeof(size) + 1);
	ft_strncpy(str, src, size);
	str[size] = '\0';
	return (str);
}
