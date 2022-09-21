# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bsqc.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eslamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:01:06 by eslamber          #+#    #+#              #
#    Updated: 2022/09/20 09:52:16 by cpalusze         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cd src
echo "---------- Norminette ----------"
norminette *.c
norminette -R CheckDefine *.h
echo "--------- Compilation ----------"
make fclean
make
./bsq "../test/test_facile1.txt"
echo "--------------------------------"
./bsq "../test/test_facile2.txt"
echo "--------------------------------"
./bsq "../test/test_facile3.txt"
echo "--------------------------------"
./bsq "../test/test_facile4.txt"
echo "--------------------------------"
./bsq "../test/map4_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map4_6_6_1.txt"
echo "--------------------------------"
echo "map non lisible"
echo "--------------------------------"
./bsq "../test_error/map_error2"
echo "--------------------------------"
./bsq "../test_error/map_error3"
echo "--------------------------------"
echo "map non resolvable"
echo "--------------------------------"
./bsq "../test_error/map_error4"
echo "--------------------------------"
./bsq "../test_error/map_error5"
echo "--------------------------------"
echo "Cleanup repertoire"
make fclean
