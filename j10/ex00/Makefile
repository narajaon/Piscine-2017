# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: narajaon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/22 11:26:04 by narajaon          #+#    #+#              #
#    Updated: 2017/03/22 14:15:18 by narajaon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

NAME = exec
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	  ./srcs/ft_strlen.c ./srcs/ft_strcmp.c \
	  ./srcs/ft_swap.c
HEADER = ./includes/*.h
NORM = norminette -R CheckForbiddenSourceHeader

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -c

norm:
	$(NORM)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
