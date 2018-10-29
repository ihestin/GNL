/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:27:42 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 18:53:03 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_putmemstr_fd(void const *b, size_t len, int fd)
{
	size_t	i;
	char	*s;

	if (!b)
		return ;
	i = 0;
	s = (char *)b;
	while (i < len)
		ft_putchardec_fd(s[i++], fd);
}
