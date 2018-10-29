/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:40:01 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/27 18:05:56 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*st;
	char	*ret;

	if (!s)
		return (0);
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (0);
	st = (char *)s + start;
	i = 0;
	while (i < len && *st != '\0')
		ret[i++] = *(st++);
	ret[i] = '\0';
	return (ret);
}
