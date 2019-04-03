CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC= srcs/ft_strlen.c srcs/ft_strchr.c
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ) 
	ar rcs $(NAME) $(OBJ)

ft_strlen.o:  ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

ft_strchr.o:  ft_strchr.c
	$(CC) $(CFLAGS) -c ft_strchr.c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re