/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:57:09 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/25 09:03:36 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	size_t	j;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ret = (char *)malloc(l1 + l2 + 1);
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (j < l1)
		ret[i++] = s1[j++];
	j = 0;
	while (j < l2)
		ret[i++] = s2[j++];
	ret[i] = '\0';
	return (ret);
}
