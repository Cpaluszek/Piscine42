# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gene.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eslamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 09:33:16 by eslamber          #+#    #+#              #
#    Updated: 2022/09/19 11:19:02 by eslamber         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo "------ Creation du repertoire test ---------"
mkdir "test"

echo "------ Generation de map 5x5 d = 1 ---------"
./map_generation.pl 5 5 1 >> "test/map$1_5_5_1.txt"
echo "------ Generation de map 5x5 d = 2 ---------"
./map_generation.pl 5 5 2 >> "test/map$1_5_5_2.txt"
echo "------ Generation de map 6x6 d = 1 ---------"
./map_generation.pl 6 6 1 >> "test/map$1_6_6_1.txt"
echo "------ Generation de map 6x6 d = 2 ---------"
./map_generation.pl 6 6 2 >> "test/map$1_6_6_2.txt"
echo "------ Generation de map 7x7 d = 1 ---------"
./map_generation.pl 7 7 1 >> "test/map$1_7_7_1.txt"
echo "------ Generation de map 7x7 d = 2 ---------"
./map_generation.pl 7 7 2 >> "test/map$1_7_7_2.txt"
echo "------ Generation de map 8x8 d = 1 ---------"
./map_generation.pl 8 8 1 >> "test/map$1_8_8_1.txt"
echo "------ Generation de map 8x8 d = 2 ---------"
./map_generation.pl 8 8 2 >> "test/map$1_8_8_2.txt"
echo "------ Generation de map 9x9 d = 1 ---------"
./map_generation.pl 9 9 1 >> "test/map$1_9_9_1.txt"
echo "------ Generation de map 9x9 d = 2 ---------"
./map_generation.pl 9 9 2 >> "test/map$1_9_9_2.txt"
echo "------ Generation de map 10x10 d = 1 -------"
./map_generation.pl 10 10 1 >> "test/map$1_10_10_1.txt"
echo "------ Generation de map 10x10 d = 2 -------"
./map_generation.pl 10 10 2 >> "test/map$1_10_10_2.txt"
