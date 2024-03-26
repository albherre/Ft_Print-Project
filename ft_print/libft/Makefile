# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albherre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 00:25:25 by albherre          #+#    #+#              #
#    Updated: 2024/03/12 20:49:30 by albherre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

COMPILER = $(CC) $(CFLAGS)

LIB = libft.h

SRCS =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_tolower.c \
	ft_toupper.c \
	$(SRCS_ADD)

SRCS_ADD =	ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strjoin.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

%.o: %.c $(LIB)
	$(COMPILER) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean all re


