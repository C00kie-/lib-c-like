/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:29:08 by pbourmea          #+#    #+#             */
/*   Updated: 2015/02/03 18:14:43 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i - 1] == c) || i == 0)
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_lensplit(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i + len] != c && s[i + len] != '\0')
		len++;
	return (len);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**ret;

	if ((s && c) && (ret = malloc(sizeof(char*) * (ft_word_count(s, c) + 1))))
	{
		i = 0;
		j = 0;
		while (s[i] != '\0')
		{
			if (s[i] == c)
				i++;
			else
			{
				len = ft_lensplit(s, c, i);
				ret[j++] = ft_strsub(s, i, len);
				i = i + len;
			}
		}
		ret[j] = NULL;
		return (ret);
	}
	return (NULL);
}
