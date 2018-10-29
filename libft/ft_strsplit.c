/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:19:22 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/27 12:50:20 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	nbword(char const *s, char c)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		m = (s[i] == '\0') ? m : m + 1;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (m);
}

static char		*nextword(size_t *i, char const *s, char c)
{
	size_t	j;
	size_t	k;
	char	*ch;

	while (s[*i] == c)
		(*i)++;
	j = *i;
	while (s[j] != '\0' && s[j] != c)
		j++;
	ch = (char *)malloc((j - (*i)) + 1);
	if (!ch)
		return (ch);
	k = 0;
	while (*i < j)
		ch[k++] = s[(*i)++];
	ch[k] = '\0';
	return (ch);
}

static void		freeret(size_t j, char **ret)
{
	while (j > 0)
		free(ret[--j]);
	free(ret);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nbw;
	size_t	i;
	size_t	j;
	char	**ret;

	if (!s || c == '\0')
		return (0);
	nbw = nbword(s, c);
	ret = (char **)malloc(sizeof(char*) * (nbw + 1));
	if (ret == 0)
		return (ret);
	i = 0;
	j = 0;
	while (j < nbw)
	{
		ret[j] = nextword(&i, s, c);
		if (!ret[j])
		{
			freeret(j, ret);
			return (0);
		}
		j++;
	}
	ret[nbw] = 0;
	return (ret);
}
