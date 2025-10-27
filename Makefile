# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 12:20:06 by dufama            #+#    #+#              #
#    Updated: 2025/10/27 09:26:27 by dufama           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c


BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

SRCS = $(LIBC) $(ADDITIONAL)

SRCSALL = $(LIBC) $(ADDITIONAL) $(BONUS)

OBJS = $(SRCS:.c=.o)

OBJSALL = $(SRCSALL:.c=.o)

NAME = libft.a

CC = gcc

AR = ar

ARFLAGS = rcs

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) -$(ARFLAGS) $(NAME) $(OBJS)

bonus:	$(OBJSALL)
		$(AR) -$(ARFLAGS) $(NAME) $(OBJSALL)

all: $(NAME)

clean:
	@$(RM) $(OBJSALL)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lft -o test
	./test

test_bonus: bonus main.c
	$(CC) $(CFLAGS) main.c -L. -lft -o test
	./test

.PHONY: all clean fclean re bonus test test_bonus
