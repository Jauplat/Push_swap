# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jauplat <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 14:04:17 by jauplat           #+#    #+#              #
#    Updated: 2018/07/19 18:15:22 by jauplat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME2 = checker
FLAG = -Wall -Wextra -Werror
OPTION = -o
LIBFT = ./libft/libft.a

FILE = 	src/push_swap.c src/ft_tab_atoi.c src/error.c src/ft_algo.c \
		src/ft_intcmp.c src/ft_push.c src/ft_rotate.c src/ft_rrotate.c \
		src/ft_sswap.c src/ft_lentab.c src/ft_mediane.c src/ft_range.c

FILE2 = src/checker.c src/ft_lentab.c src/ft_tab_atoi.c src/error.c \
		src/ft_push.c src/ft_rotate.c src/ft_rrotate.c src/ft_sswap.c \
		src/ft_intcmp.c src/ft_range.c

OBJ = $(FILE:src/%.c=%.o)

OBJ2 = $(FILE2:src/%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	cd libft && make && cd ..
	gcc $(FLAG) $(OPTION) $(NAME) $(LIBFT) $(FILE)
	gcc $(FLAG) $(OPTION) $(NAME2) $(LIBFT) $(FILE2)

clean:
	cd libft && make clean && cd ..
	rm -rf $(OBJ)
	rm -rf $(OBJ2)

fclean:
	make clean
	cd libft && make fclean && cd ..
	rm -rf $(NAME)
	rm -rf $(NAME2)

re:
	make fclean
	make all
