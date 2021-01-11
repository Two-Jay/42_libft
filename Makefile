# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 02:25:46 by jseo              #+#    #+#              #
#    Updated: 2021/01/11 16:51:12 by jseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXEX : .c .o
NAME = libft.a
CC = gcc
AFLAGS = rc
CFLAGS = -Wall -Wextra -Werror
SRCS = *.c
OBJECTS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	rm -rf $(OBJECTS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

$(NAME) : $(OBJECTS)
	ar $(AFLAGS) $@ $?
%.o : %.c
	$(CC) $(CFLAGS) -c $?
.PHONY : all clean fclean re
