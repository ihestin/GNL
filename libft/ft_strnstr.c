/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:24:27 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/17 14:24:44 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	if (to_find[0] == '\0')
		return (s);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j] && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return (&s[i]);
		i++;
	}
	return (0);
}
