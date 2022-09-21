# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalusze <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:52:41 by cpalusze          #+#    #+#              #
#    Updated: 2022/09/18 16:48:21 by cpalusze         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
CC= cc
NAME = rush-02
CCFLAGS = -Wall -Werror -Wextra
FILES = main.c readfile.c ft_putstr.c create_dictionnary.c ft_strcat.c \
detect_dict_errors.c ft_digit_count.c number_to_text.c \
detect_input_errors.c 
TARGET_LIB = lib.h
OBJ= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(FILES) $(CCFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
