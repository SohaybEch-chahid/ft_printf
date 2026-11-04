# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/04 14:16:31 by sech-cha          #+#    #+#              #
#    Updated: 2026/11/04 21:31:40 by sech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

SRC = ft_printf.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_putptr.c ft_puthex.c ft_putchar.c

OBJ = $(SRC:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
