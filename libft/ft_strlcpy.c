/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:34:41 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/24 12:11:13 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	ls = i;
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ls);
}
