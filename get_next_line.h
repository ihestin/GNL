/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:41:35 by ihestin           #+#    #+#             */
/*   Updated: 2017/12/29 15:55:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>

# define BUFF_SIZE 2048

typedef struct		s_bufs
{
	int				ffd;
	char			buf[BUFF_SIZE + 1];
	size_t			sizeb;
	void			*p;
	struct s_bufs	*next;
}					t_bufs;

int					get_next_line(const int fd, char **line);

#endif
