/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:02:54 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/24 12:10:27 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*ret;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (ret == NULL)
		return (ret);
	i = -1;
	while (src[++i] != '\0')
		ret[i] = src[i];
	ret[i] = '\0';
	return (ret);
}
