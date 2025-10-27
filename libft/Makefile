# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 12:20:06 by dufama            #+#    #+#              #
#    Updated: 2025/10/27 15:02:54 by dufama           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c \
        ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
        ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
        ft_calloc.c ft_strdup.c

ADDITIONAL = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
        ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
        ft_lstmap_bonus.c

PRINTF_DIR = ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

SRCS = $(LIBC) $(ADDITIONAL) $(BONUS)
OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc
AR = ar
ARFLAGS = rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I ./

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(MAKE) -C $(PRINTF_DIR)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)


$(PRINTF_LIB):
	@$(MAKE) -C $(PRINTF_DIR)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
