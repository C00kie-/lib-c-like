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

static char		*join_buffer(char *buf, char *str)
{
	char			*new_str;

	new_str = ft_strjoin(buf, str);
	ft_bzero(str, BUF_SIZE);
	free(buf);
	return (new_str);
}

static int		case_end(int i, char *buf, char **line, char **ret)
{
	int				len;

	len = ft_strlen(buf);
	buf[i++] = '\0';
	if (len - i >= 0)
		*ret = ft_strsub(buf, i, len - i);
	*(line) = ft_strdup(buf);
	free(buf);
	return (1);
}

int				get_next_line(int fd, char **line)
{
	char			*str;
	char			*buf;
	int				i;
	int				len;
	static char		*ret = NULL;

	if ((str = ft_strnew(BUF_SIZE + 1)) == NULL || line == NULL)
		return (-1);
	buf = ret;
	ret = NULL;
	*line = NULL;
	while ((len = read(fd, str, BUF_SIZE)) >= 0)
	{
		if ((len == 0 && (buf == NULL || buf[0] == '\0')))
			return (0);
		if (len != 0)
			buf = join_buffer(buf, str);
		i = 0;
		while ((buf[i] != '\n') && (buf[i] != '\0'))
			i++;
		if (i != (int)ft_strlen(buf) || len == 0)
			return (case_end(i, buf, line, &ret));
	}
	return (len);
}
