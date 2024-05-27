# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaslan <alaslan@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 18:05:42 by alaslan           #+#    #+#              #
#    Updated: 2024/05/16 14:49:32 by alaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PUSH_SWAP = push_swap

LIBFT = libft
LIBFTM = libft/libft.a

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

SRC_COMMON =	function.c \
				function2.c \
				function3.c \
				rules_a.c \
				rules_b.c \
				rules_2.c \
				exit.c \

OBJ_COMMON = $(SRC_COMMON:.c=.o)

SRC_PUSH_SWAP = push_swap.c $(SRC_COMMON)

OBJ_PUSH_SWAP = $(SRC_PUSH_SWAP:.c=.o)

all:  $(NAME_PUSH_SWAP)

$(NAME_PUSH_SWAP): $(OBJ_PUSH_SWAP)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_PUSH_SWAP) $(LIBFTM) -o $(NAME_PUSH_SWAP)
	@echo "\nPush_swap is ready\n"

clean:
	@rm -f $(OBJ_COMMON) $(OBJ_PUSH_SWAP)
	@make clean -C $(LIBFT)
	@echo "\nObject files deleted\n"

fclean: clean
	@rm -rf $(NAME_PUSH_SWAP)
	@make fclean -C $(LIBFT)
	@echo "\nExecutable files deleted\n"

re: fclean all

.PHONY: all clean fclean re
