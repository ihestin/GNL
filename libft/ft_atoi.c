/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:31:25 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/29 18:26:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_deb(char c)
{
	if (c == ' ' || c == '\r' || c == '\n')
		return (0);
	if (c == '\t' || c == '\v' || c == '\f')
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		sign;

	i = 0;
	while (ft_deb(str[i]) == 0)
		i++;
	sign = +1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}
