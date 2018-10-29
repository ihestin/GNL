/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:36:03 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 09:23:19 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	netoyage(void *mem, size_t i)
{
	if (mem || i)
		return ;
	return ;
}

static int	elemmap(t_list **lr, t_list *ll, t_list *(*f)(t_list *elem))
{
	t_list	*l;
	t_list	*li;

	l = f(ll);
	if (!l)
		return (0);
	li = ft_lstnew(l->content, l->content_size);
	if (!li)
		return (0);
	if (*lr)
		(lr[0])->next = li;
	else
		*lr = li;
	return (1);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ll;
	t_list	*lr;
	t_list	*ret;
	int		i;

	ret = 0;
	if (!lst || !f)
		return (ret);
	i = elemmap(&ret, lst, f);
	ll = lst->next;
	lr = ret;
	while (i && ll)
	{
		i = elemmap(&lr, ll, f);
		ll = ll->next;
		lr = lr->next;
	}
	if (i)
		return (ret);
	ft_lstdel(&ret, netoyage);
	return (ret);
}
