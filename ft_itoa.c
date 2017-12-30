/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:09:27 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 13:11:40 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		i++;
		n /= 10;
	}
	i++;
	return (i);
}

static char		*ft_numput(int len, int n)
{
	char	*dest;

	dest = ft_strnew(len);
	if (dest != NULL)
	{
		len--;
		if (n < 0)
		{
			dest[0] = '-';
			n = n * -1;
		}
		while (n / 10 > 0)
		{
			dest[len] = (n % 10) + '0';
			len--;
			n = n / 10;
		}
		dest[len] = (n % 10) + '0';
	}
	return (dest);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*dest;

	len = ft_int_len(n);
	if (n != -2147483648)
		dest = ft_numput(len, n);
	else
	{
		dest = ft_strnew(12);
		if (dest != NULL)
			ft_strcpy(dest, "-2147483648");
	}
	return (dest);
}
