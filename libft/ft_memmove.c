/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:23:08 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/18 14:42:41 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (s - d >= 0)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (i < len)
		{
			i++;
			d[len - i] = s[len - i];
		}
	return (dst);
}
