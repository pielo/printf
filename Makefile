# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 02:53:57 by mlanglet          #+#    #+#              #
#    Updated: 2013/12/19 19:34:38 by mlanglet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_itoa.c \
	  ft_strnew.c \
	  ft_putchar.c \
	  ft_strlen.c \
	  ft_putnbr.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I.

RM = /bin/rm -f

all: $(NAME)

%.o: %.c
	gcc -c -o $@ $^ $(CFLAGS)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
