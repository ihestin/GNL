/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemendl_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:23:41 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 18:45:00 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmemendl_fd(void const *s, size_t len, int fd)
{
	if (!s)
		return ;
	ft_putmemstr_fd(s, len, fd);
	ft_putchar_fd('\n', fd);
}
