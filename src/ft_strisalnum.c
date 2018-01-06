/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 20:14:24 by pbourmea          #+#    #+#             */
/*   Updated: 2017/12/22 20:14:26 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisalnum(char *line)
{
	int i;

	i = 0;
	while (line && line[i] != '\0')
	{
		if (!ft_isalnum(line[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
