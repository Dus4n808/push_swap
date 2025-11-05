# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 12:20:06 by dufama            #+#    #+#              #
#    Updated: 2025/11/05 11:24:43 by dufama           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  push_swap.c \
		src/push_swap_operation.c \
		src/push_swap_operation2.c \
		src/push_swap_utils.c \
		src/push_swap_parsing.c \
		src/push_swap_check.c \
		src/push_swap_norm.c \
		src/push_swap_radix.c \
		src/push_swap_sort_1_5.c
OBJS = $(SRCS:.c=.o)

NAME = push_swap
DEBUG_NAME = push_swap_debug

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./
RM = rm -f


LIBFT_DIR = ./libft

LIBFT = $(LIBFT_DIR)/libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

leaks:
	valgrind --leak-check=full ./$(NAME)

test: all
	./$(NAME)

.PHONY: all clean fclean re
