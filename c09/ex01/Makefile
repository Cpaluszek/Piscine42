NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c src/ft_strlen.c \
	  srcs/ft_strcmp.c
OBJ = ${SRC:.c=.o}
HEAD = includes
FLAGS = -Wall -Wextra -Werror
SANITIZE = -fsanitize=address -fno-omit-frame-pointer


all: ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

.c.o:
	gcc ${FLAGS} -c $< -o ${OBJ} -I ${HEAD}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJ}

re: fclean all

.PHONY: all clean fclean re
