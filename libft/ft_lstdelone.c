/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:16:11 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/26 16:01:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	rm;

	if (!alst || !*alst)
		return ;
	rm = **alst;
	if (del)
		del(rm.content, rm.content_size);
	free((void *)(*alst));
	*alst = 0;
}
