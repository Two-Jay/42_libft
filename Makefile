/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 01:02:49 by jekim             #+#    #+#             */
/*   Updated: 2021/01/09 16:46:46 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJS = $(SRC:.c=.o)

HEAD = libft.h

all: $(NAME)

$(NAME) :
	$(CC) $(GFLAGS) -o $(HEAD) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:
	fclean all
