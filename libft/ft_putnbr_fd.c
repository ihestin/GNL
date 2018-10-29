/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:02:22 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/27 19:18:06 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	initaff(int *n, char *aff)
{
	int		j;

	j = 0;
	if (*n == -2147483648)
	{
		aff[j++] = '-';
		aff[j++] = '2';
		*n = 147483648;
	}
	if (*n < 0)
	{
		aff[j++] = '-';
		*n = (-1 * (*n));
	}
	return (j);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	rev[20];
	char	aff[20];
	int		i;
	int		j;

	i = 0;
	j = initaff(&n, aff);
	while (n >= 10)
	{
		rev[i++] = '0' + (n % 10);
		n = n / 10;
	}
	aff[j++] = '0' + n;
	while (i > 0)
		aff[j++] = rev[--i];
	aff[j] = '\0';
	ft_putstr_fd(aff, fd);
}
