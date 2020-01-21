# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkurniaw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 19:28:14 by gkurniaw          #+#    #+#              #
#    Updated: 2020/01/20 21:32:13 by gkurniaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAG=-Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS=includes

all : make_lib

make_lib:
	gcc -c $(SRCS) -I$(HEADERS)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
