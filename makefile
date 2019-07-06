CC=gcc
NAME=libft.a
SRC = ft_strlen.c ft_strnlen.c
OBJ= $(SRC:.c=.o)
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	 ar rcs $@ $^

%.o: %.c 
	 $(CC) -c $< $(FLAGS)
 
clean:
	 rm -rf $(OBJ)  

fclean: clean
	 rm -f $(NAME) a.out

re: fclean all

