/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 12:04:01 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/23 14:10:57 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*ret;
	char	*s;

	if (size == 0)
		return (NULL);
	ret = malloc(size);
	if (ret == NULL)
		return (ret);
	s = ret;
	i = 0;
	while (i < size)
		s[i++] = 0;
	return (ret);
}
