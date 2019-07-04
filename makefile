all: libft.a

libft.a: strlen.o
	 ar rcs libft.a strlen.o

strlen.o: srcs/strlen.c
	 gcc -c srcs/strlen.c
     
clean:
	 rm strlen.o libft.a a.out