CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=ft_strlen
SRC= ft_strlen.c
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

ft_strlen.o:  ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re