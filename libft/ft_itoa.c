/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:03:39 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/27 19:10:54 by ihestin          ###   ########.fr       */
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

char		*ft_itoa(int n)
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
	return (ft_strdup(aff));
}
