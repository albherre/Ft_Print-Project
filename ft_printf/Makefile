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

# Standard
NAME		=	libftprintf.a
CC			=	gcc
INC			=	Includes
CFLAGS		=	-Wall -Werror -Wextra -I$(INC)
COMPILER	=	$(CC) $(CFLAGS)
AR			=	ar rcs
RM			=	rm -f

# Sources
SRCS		= 	$(wildcard src/*.c)
TESTS		=	$(wildcard test/*.c)
OBJS		=	$(SRCS:.c=.o) $(TESTS: .c=.o)

# Rules
%.o: %.c
	$(COMPILER) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Commands
all: $(NAME)

tester:
	cd printfTester && make m

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	clean fclean all tester re
