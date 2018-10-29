/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 08:45:28 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/13 18:28:26 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t ld;
	size_t ls;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	ld = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	ls = j;
	if (ld == size)
		return (ls + size);
	j = 0;
	while (i < (size - 1) && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ld + ls);
}
