/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:03:03 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/17 18:15:49 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	cc;
	char	*str;

	cc = (char)c;
	str = b;
	i = 0;
	while (i < len)
		str[i++] = cc;
	return (b);
}
