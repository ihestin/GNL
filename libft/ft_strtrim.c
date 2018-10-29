/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:26:44 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 14:18:45 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		isblanc(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (0);
	if (c == '\0')
		return (1);
	return (2);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	i1;
	size_t	i2;
	char	*st;
	char	*ret;

	i1 = 0;
	if (!s)
		return (0);
	st = (char *)s;
	while (isblanc(st[i1]) == 0)
		i1++;
	i2 = ft_strlen(s);
	while (i2 > i1 && isblanc(st[i2]) < 2)
		i2--;
	i2 = (st[i2] == '\0') ? i2 : i2 + 1;
	ret = (char *)malloc((i2 - i1) + 1);
	if (!ret)
		return (0);
	i = 0;
	while (i1 < i2)
		ret[i++] = st[i1++];
	ret[i] = '\0';
	return (ret);
}
