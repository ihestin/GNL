/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchardec_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:06:58 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/22 13:46:17 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchardec_fd(char c, int fd)
{
	unsigned char	cc;
	unsigned int	ic;
	unsigned int	i;

	cc = (unsigned char)c;
	ic = cc;
	i = ic % 100;
	ft_putchar_fd('0' + (ic / 100), fd);
	ft_putchar_fd('0' + (i / 10), fd);
	ft_putchar_fd('0' + (i % 10), fd);
}
