#!/bin/sh
FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strcmp.c ft_strlen.c"
OBJ="ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.o"
NAME="libft.a"
FLAGS="-Wall -Wextra -Werror"
gcc -c $FLAGS $FILES 
ar rc $NAME $OBJ
ranlib $NAME
rm -rf $OBJ
