# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 14:54:52 by cpalusze          #+#    #+#              #
#    Updated: 2022/09/20 19:58:16 by eslamber         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c generate_map.c read_file.c ft_putstr.c ft_strlen.c \
	   ft_check_error.c atoi_n.c solve.c read_stdin.c
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra
LIB = lib.h
SANITIZE = -fsanitize=address -fno-omit-frame-pointer


all: ${NAME}

bsq: ${OBJ}
	cc ${FLAGS} -o $@ $^

%.o: %.c ${LIB}
	cc ${FLAGS} -c $<

# clean commands
fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJ}

re: fclean all

.PHONY: all bsq clean fclean re
