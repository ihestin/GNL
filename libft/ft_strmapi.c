/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:17:48 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/28 09:06:00 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*ret;
	char	*src;

	if (!s || !f)
		return (0);
	i = 0;
	src = (char *)s;
	while (*(src + i) != '\0')
		i++;
	ret = (char *)malloc(i + 1);
	if (!ret)
		return (0);
	j = 0;
	while (j < i)
	{
		ret[j] = f((unsigned int)j, src[j]);
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
