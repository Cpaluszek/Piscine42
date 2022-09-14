#!/bin/bash
echo -e "\n######### NORMINETTE #########\n"
norminette ex*/*

echo -e "\n########### TESTS ############\n"
gcc -Wall -Werror -Wall main.c ex*/*c && ./a.out 1 2 3 4 5 6
