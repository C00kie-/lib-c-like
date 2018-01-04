/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:56:08 by pbourmea          #+#    #+#             */
/*   Updated: 2015/01/27 19:03:43 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	if (alst)
		lst = *alst;
	if (alst != NULL && lst != NULL)
	{
		if (del != NULL)
			del(lst->content, lst->content_size);
		free(lst);
		*alst = NULL;
	}
}
