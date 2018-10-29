/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:49:57 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 15:22:52 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (ret == 0)
		return (0);
	ret->next = 0;
	if (!content)
	{
		ret->content = 0;
		ret->content_size = 0;
		return (ret);
	}
	ret->content = (void *)content;
	ret->content_size = content_size;
	return (ret);
}
