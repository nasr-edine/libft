CC=gcc
NAME=libft.a
SRC = 	ft_strlen.c ft_strnlen.c \
		ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c \
		ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_strdup.c \
		ft_strndup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c \
		ft_strlcpy.c ft_strncat.c \
		ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c \
		ft_strnstr.c ft_strcmp.c \
		ft_strncmp.c ft_toupper.c \
		ft_tolower.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c \
		ft_atoi.c
OBJ= $(SRC:.c=.o)
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	 @ar rcs $@ $^

%.o: %.c 
	 @$(CC) -c $< $(FLAGS)
 
clean:
	 @rm -rf $(OBJ)  

fclean: clean
	 @rm -f $(NAME) a.out

re: fclean all

