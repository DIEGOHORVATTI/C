#!/usr/bin/env bash
######################################################################################
#                      automação de copilador em shellscript                         #
######################################################################################

echo -e "\n"
if [[ $1 != '' ]]; then
	gcc ./$1.c -o ./exe/$1.exe && ./exe/$1.exe
else
	echo -e "\n ├──────────────"
	exec colorls --group-directories-first --almost-all --files --tree=1 | grep .c
	echo -e " ├──\033[33;1m   h\033[m  help"
	echo -e " ├──\033[31;1m   0\033[m  sair"
	echo -e " +──────────────\n"
fi
echo -e "\n"