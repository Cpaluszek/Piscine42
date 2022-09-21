echo "#########################   COMP   ########################\n"
norminette -R CheckForbiddenHeaderSource ex00/*.c
norminette -R CheckDefine ex00/*.h

rm a.out
rm ex00/lib.h.gch
gcc -Wextra -Werror -Wall ex00/*.c ex00/lib.h
echo
echo "###########################################################\n"
echo "#########################   TEST   ########################\n"
#./a.out "0" | cat -e
#./a.out "10" | cat -e
#./a.out "11" | cat -e
#./a.out "12" | cat -e
#./a.out "13" | cat -e
#./a.out "14" | cat -e
#./a.out "16" | cat -e
#./a.out "17" | cat -e
#./a.out "18" | cat -e
#./a.out "19" | cat -e
#./a.out "22" | cat -e
#./a.out "33" | cat -e
#./a.out "44" | cat -e
#./a.out "55" | cat -e
#./a.out "66" | cat -e
#./a.out "77" | cat -e
#./a.out "88" | cat -e
#./a.out "99" | cat -e
#./a.out "100"
#./a.out "101"
#./a.out "111"
#./a.out "222"
#./a.out "333"
#./a.out "444"
#./a.out "555"
#./a.out "666"
#./a.out "777"
#./a.out "888"
#./a.out "999"
#./a.out "1000"
./a.out "1111"
./a.out "25000"
./a.out "1000000"
./a.out "1000000000"
./a.out "1000000000000"
./a.out "1000000000000000"
./a.out "1000000000000000000"
./a.out "1000000000000000000000"
./a.out "1000000000000000000000000"
./a.out "1000000000000000000000000000"
./a.out "1000000000000000000000000000000"
./a.out "1000000000000000000000000000000000"
./a.out "123456"
./a.out "123456789"


echo "####################### CUSTOM DICT  ######################\n"
./a.out "ex00/dict/numbers_es.dict"

echo "####################### TEST  ERRORS ######################\n"
./a.out "-1" 				#NEGATIVE NUMBER
./a.out "1,1"
./a.out "abcdef"
./a.out "" 					#NOTHING
./a.out
./a.out "test" "test" 

