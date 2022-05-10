#!/usr/bin/env bash
######################################################################################
#                      automação de copilador em shellscript                         #
######################################################################################

echo " ├──────────────"
exec colorls --group-directories-first --almost-all --files --tree=1 | grep .c
echo -e " ├──\033[33;1m   h\033[m  help"
echo -e " ├──\033[31;1m   0\033[m  sair"
echo -e " +──────────────\n"

read -p " Digite o numero/nome arquivo em .c: " numero_arquivo 
echo -e "\n"

case $numero_arquivo in
	0) echo -e "\n\033[32;1m bay bay!\033[m\n"; exit ;;
	18) bash ./18.sh ; exit ;;
	19) bash ./19.sh; exit ;;
	"h") exo-open --launch WebBrowser https://github.com/DIEGOHORVATTI/IFC/tree/main/caderno/1_semestre/algoritimos/aula_5/README.md;;
	*) gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe ;;
esac