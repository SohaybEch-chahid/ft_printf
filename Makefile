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

.PHONY: clean
