/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:29:17 by pbourmea          #+#    #+#             */
/*   Updated: 2015/04/02 15:41:43 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*boucle_if(char *tmp, char *str)
{
	char			*tempo;

	tempo = ft_strjoin(tmp, str);
	ft_bzero(str, BUF_SIZE);
	free(tmp);
	return (tempo);
}

static int		other_if(int i, char *tmp, char **line, char **statik)
{
	int				len;

	len = ft_strlen(tmp);
	tmp[i++] = '\0';
	if (len - i >= 0)
		*statik = ft_strsub(tmp, i, len - i);
	*(line) = ft_strdup(tmp);
	return (1);
}

int				get_next_line(int fd, char **line)
{
	char			*str;
	char			*tmp;
	int				i;
	int				len;
	static char		*statik = NULL;

	if ((str = ft_strnew(BUF_SIZE + 1)) == NULL || line == NULL)
		return (-1);
	tmp = statik;
	statik = NULL;
	*line = NULL;
	while ((len = read(fd, str, BUF_SIZE)) >= 0)
	{
		if ((len == 0 && (tmp == NULL || tmp[0] == '\0')))
			return (0);
		if (len != 0)
			tmp = boucle_if(tmp, str);
		i = 0;
		while ((tmp[i] != '\n') && (tmp[i] != '\0'))
			i++;
		if (i != (int)ft_strlen(tmp) || len == 0)
			return (other_if(i, tmp, line, &statik));
	}
	return (len);
}
