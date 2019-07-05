CC=gcc
NAME=libft.a
SRC = ft_strlen.c
OBJ= $(SRC:.c=.o)

CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	 ar rcs libft.a $<

%.o: %.c
	 $(CC) -c $< $(CFLAGS)

.PHONY: clean fclean
 
clean:
	 rm -rf $(OBJ)  

fclean: clean
	 rm -f $(NAME) a.out

re: fclean all