# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 14:20:24 by inkahar           #+#    #+#              #
#    Updated: 2023/12/06 14:20:25 by inkahar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libftprintf.a

SRC = 	ft_printf.c \
		ft_hex.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_uputnbr.c \
		ft_hexa.c

OBJ = $(SRC:.c=.o)
CC = cc

CFLAGS = -Wall -Werror -Wextra

DEL = rm -rf

AR = ar -rcs

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
all: $(NAME)

clean:
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
