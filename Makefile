# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 12:20:06 by dufama            #+#    #+#              #
#    Updated: 2025/10/28 16:26:24 by dufama           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c\
		src/push_swap_operation.c \
		src/push_swap_utils.c
OBJS = $(SRCS:.c=.o)

NAME = push_swap

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

test: all
	./push_swap

.PHONY: all clean fclean re
