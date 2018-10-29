# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:52:40 by ihestin           #+#    #+#              #
#    Updated: 2017/12/29 16:04:32 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS= -Wall -Werror -Wextra -I includes
SRC   = ft_atoi.c ft_strcmp.c ft_strdup.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strlcpy.c \
		ft_strcat.c ft_strncat.c ft_strlcat.c ft_strstr.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_putchar.c ft_putstr.c ft_putchardec.c ft_putmemstr.c ft_putendl.c ft_putmemendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putchardec_fd.c ft_putendl_fd.c ft_putmemendl_fd.c ft_putmemstr_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c \
		ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	$(CC)   -o $@ -c  $< $(CFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

