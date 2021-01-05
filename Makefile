NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ./ft_atoi.c
	./ft_bzero.c
	./ft_calloc.c
	./ft_memchr.c
	./ft_memcmp.c
	./ft_memcpy.c
	./ft_memset.c
	./ft_memccpy.c
	./ft_memmove.c
	./ft_strchr.c
	./ft_strdup.c
	./ft_strlcat.c
	./ft_strlcpy.c
	./ft_strlen.c
	./ft_strncmp.c
	./ft_strnstr.c
	./ft_tolower.c
	./ft_toupper.c
	./ft_isalnum.c
	./ft_isalpha.c
	./ft_isascii.c
	./ft_isdigit.c
	./ft_isprint.c
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
