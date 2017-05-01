/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:24:28 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:03:11 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*tmp;

	if (alst)
		lst = *alst;
	while (alst != NULL && lst != NULL)
	{
		if (del != NULL)
			del(lst->content, lst->content_size);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	if (alst)
		*alst = lst;
}
