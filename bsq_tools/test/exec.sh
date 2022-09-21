# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bsqc.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eslamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:01:06 by eslamber          #+#    #+#              #
#    Updated: 2022/09/20 09:16:07 by eslamber         ###   ########lyon.fr    #
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
echo "test multi arguments"
echo "deux arguments correctes"
./bsq "../test/test_facile1.txt" "../test/test_facile2.txt"
echo "un argument incorrecte et un correcte"
./bsq "../test/test_facile1" "../test/test_facile2.txt"
echo "--------------------------------"
./bsq "../test/test_facile2.txt" "../test/test_facile1"
echo "deux arguments incorectes"
./bsq "../test/test_facile1" "../test/test_facile2"
echo "un argument irresolvable et un correcte"
./bsq "../test_error/map_error1.txt" "../test/test_facile2.txt"
echo "--------------------------------"
./bsq "../test/test_facile2.txt" "../test_error/map_error1.txt"
echo "deux arguments irresolvables"
./bsq "../test_error/map_error1.txt" "../test_error/map_error2.txt"
echo "que des arguments avec un fichier non correcte"
./bsq "../test_error/map_error2" "../test_error/map_error3" "../test_error/map_error6" "../test_error/map_error7" "../test_error/map_error9" "../test_error/map_error10" "../test_error/map_error11" "../test_error/map_error12"
echo "test correctes"
./bsq "../test/test_syntaxe1.txt"
echo "--------------------------------"
./bsq "../test/test_facile1.txt"
echo "--------------------------------"
./bsq "../test/test_facile2.txt"
echo "--------------------------------"
./bsq "../test/test_facile3.txt"
echo "--------------------------------"
./bsq "../test/test_facile4.txt"
echo "--------------------------------"
./bsq "../test/test_facile5.txt"
echo "--------------------------------"
./bsq "../test/test_facile6.txt"
echo "--------------------------------"
./bsq "../test/test_facile7.txt"
echo "--------------------------------"
./bsq "../test/test_facile8.txt"
echo "--------------------------------"
./bsq "../test/test_facile9.txt"
echo "--------------------------------"
./bsq "../test/test_facile10.txt"
echo "--------------------------------"
./bsq "../test/test_facile11.txt"
echo "--------------------------------"
./bsq "../test/test_facile12.txt"
echo "--------------------------------"
./bsq "../test/test_facile13.txt"
echo "--------------------------------"
./bsq "../test/test_facile14.txt"
echo "--------------------------------"
./bsq "../test/test_facile15.txt"
echo "--------------------------------"
./bsq "../test/test_facile16.txt"
echo "--------------------------------"
./bsq "../test/map1_5_5_1.txt"
echo "--------------------------------"
./bsq "../test/map1_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map1_6_6_1.txt"
echo "--------------------------------"
./bsq "../test/map1_6_6_2.txt"
echo "--------------------------------"
./bsq "../test/map1_7_7_1.txt"
echo "--------------------------------"
./bsq "../test/map1_7_7_2.txt"
echo "--------------------------------"
./bsq "../test/map1_8_8_1.txt"
echo "--------------------------------"
./bsq "../test/map1_8_8_2.txt"
echo "--------------------------------"
./bsq "../test/map1_9_9_1.txt"
echo "--------------------------------"
./bsq "../test/map1_9_9_2.txt"
echo "--------------------------------"
./bsq "../test/map1_10_10_1.txt"
echo "--------------------------------"
./bsq "../test/map1_10_10_2.txt"
echo "--------------------------------"
./bsq "../test/map2_5_5_1.txt"
echo "--------------------------------"
./bsq "../test/map2_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map2_6_6_1.txt"
echo "--------------------------------"
./bsq "../test/map2_6_6_2.txt"
echo "--------------------------------"
./bsq "../test/map2_7_7_1.txt"
echo "--------------------------------"
./bsq "../test/map2_7_7_2.txt"
echo "--------------------------------"
./bsq "../test/map2_8_8_1.txt"
echo "--------------------------------"
./bsq "../test/map2_8_8_2.txt"
echo "--------------------------------"
./bsq "../test/map2_9_9_1.txt"
echo "--------------------------------"
./bsq "../test/map2_9_9_2.txt"
echo "--------------------------------"
./bsq "../test/map2_10_10_1.txt"
echo "--------------------------------"
./bsq "../test/map2_10_10_2.txt"
echo "--------------------------------"
./bsq "../test/map3_5_5_1.txt"
echo "--------------------------------"
./bsq "../test/map3_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map3_6_6_1.txt"
echo "--------------------------------"
./bsq "../test/map3_6_6_2.txt"
echo "--------------------------------"
./bsq "../test/map3_7_7_1.txt"
echo "--------------------------------"
./bsq "../test/map3_7_7_2.txt"
echo "--------------------------------"
./bsq "../test/map3_8_8_1.txt"
echo "--------------------------------"
./bsq "../test/map3_8_8_2.txt"
echo "--------------------------------"
./bsq "../test/map3_9_9_1.txt"
echo "--------------------------------"
./bsq "../test/map3_9_9_2.txt"
echo "--------------------------------"
./bsq "../test/map3_10_10_1.txt"
echo "--------------------------------"
./bsq "../test/map3_10_10_2.txt"
echo "--------------------------------"
./bsq "../test/map4_5_5_1.txt"
echo "--------------------------------"
./bsq "../test/map4_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map4_6_6_1.txt"
echo "--------------------------------"
./bsq "../test/map4_6_6_2.txt"
echo "--------------------------------"
./bsq "../test/map4_7_7_1.txt"
echo "--------------------------------"
./bsq "../test/map4_7_7_2.txt"
echo "--------------------------------"
./bsq "../test/map4_8_8_1.txt"
echo "--------------------------------"
./bsq "../test/map4_8_8_2.txt"
echo "--------------------------------"
./bsq "../test/map4_9_9_1.txt"
echo "--------------------------------"
./bsq "../test/map4_9_9_2.txt"
echo "--------------------------------"
./bsq "../test/map4_10_10_1.txt"
echo "--------------------------------"
./bsq "../test/map4_10_10_2.txt"
echo "--------------------------------"
./bsq "../test/map5_5_5_1.txt"
echo "--------------------------------"
./bsq "../test/map5_5_5_2.txt"
echo "--------------------------------"
./bsq "../test/map5_6_6_1.txt"
echo "--------------------------------"
./bsq "../test/map5_6_6_2.txt"
echo "--------------------------------"
./bsq "../test/map5_7_7_1.txt"
echo "--------------------------------"
./bsq "../test/map5_7_7_2.txt"
echo "--------------------------------"
./bsq "../test/map5_8_8_1.txt"
echo "--------------------------------"
./bsq "../test/map5_8_8_2.txt"
echo "--------------------------------"
./bsq "../test/map5_9_9_1.txt"
echo "--------------------------------"
./bsq "../test/map5_9_9_2.txt"
echo "--------------------------------"
./bsq "../test/map5_10_10_1.txt"
echo "--------------------------------"
./bsq "../test/map5_10_10_2.txt"
echo "--------------------------------"
echo "test fichier incorrectes"
echo "--------------------------------"
./bsq "../test/map4_8_8_1"
echo "--------------------------------"
./bsq "../test_error/map1"
echo "--------------------------------"
./bsq "../test_error/map_error13"
echo "--------------------------------"
./bsq "../test_error/map_error14"
echo "--------------------------------"
./bsq "../test_error/map_error15"
echo "--------------------------------"
./bsq "../test_error/map_error16"
echo "--------------------------------"
./bsq "../test_error/map_error17"
echo "--------------------------------"
./bsq "../test_error/map_error18"
echo "--------------------------------"
./bsq "../test_error/map_error19"
echo "map non lisible"
echo "--------------------------------"
./bsq "../test_error/map_error2"
echo "--------------------------------"
./bsq "../test_error/map_error3"
echo "--------------------------------"
./bsq "../test_error/map_error6"
echo "--------------------------------"
./bsq "../test_error/map_error7"
echo "--------------------------------"
./bsq "../test_error/map_error9"
echo "--------------------------------"
./bsq "../test_error/map_error10"
echo "--------------------------------"
./bsq "../test_error/map_error11"
echo "--------------------------------"
./bsq "../test_error/map_error12"
echo "--------------------------------"
echo "map non resolvable"
echo "--------------------------------"
./bsq "../test_error/map_error4"
echo "--------------------------------"
./bsq "../test_error/map_error5"
echo "--------------------------------"
./bsq "../test_error/map_error8"
echo "Cleanup repertoire"
make fclean
