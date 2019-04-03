CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC= srcs/ft_strlen.c srcs/ft_strchr.c srcs/ft_strcpy.c srcs/ft_strcmp.c
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ) 
	ar rcs $(NAME) $(OBJ)

ft_strlen.o:  ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

ft_strchr.o:  ft_strchr.c
	$(CC) $(CFLAGS) -c ft_strchr.c

ft_strcpy.o:  ft_strcpy.c
	$(CC) $(CFLAGS) -c ft_strcpy.c

ft_strcmp.o:  ft_strcmp.c
	$(CC) $(CFLAGS) -c ft_strcmp.c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re