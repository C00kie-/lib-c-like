/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:59:45 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:05:35 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*ret;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp = f(lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	ret = new;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		new->next = ft_lstnew(tmp->content, tmp->content_size);
		lst = lst->next;
		new = new->next;
	}
	return (ret);
}
