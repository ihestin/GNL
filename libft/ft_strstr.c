/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:34:22 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/16 17:24:27 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	if (to_find[0] == '\0')
		return (s);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&s[i]);
		i++;
	}
	return (0);
}
