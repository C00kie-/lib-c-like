/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 17:18:28 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:05:58 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*lst;
	char	*tmp;

	lst = (t_list*)ft_strnew(sizeof(t_list));
	if (!lst)
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		tmp = ft_strnew(content_size);
		if (!tmp)
			return (NULL);
		ft_memcpy(tmp, content, content_size);
		lst->content = tmp;
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
