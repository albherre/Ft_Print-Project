# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albherre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 13:03:03 by albherre          #+#    #+#              #
#    Updated: 2024/03/26 13:08:09 by albherre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libftprintf.a

CC		= gcc

CFLAGS		= -Wall -Werror -Wextra

COMPILER	= $(CC) $(CFLAGS)

LIB		= ft_printf.h

SRCS		=	printf.c \
				main.c

OBJS		= $(SRCS:.c=.o)

AR		= ar rcs

RM		= rm -f

%.o: %.c $(LIB)
	$(COMPILER) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY:	clean fclean all re
