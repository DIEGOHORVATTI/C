#include <stdio.h>

// cores de testo em linux bem topzinho ^^
#define preto(texto) printf("\33[0;30m %d\33[0m", texto)
#define vermelho(texto) printf("\33[0;31m %d\33[0m", texto)
#define verde(texto) printf("\33[0;32m %d\33[0m", texto)
#define marrom(texto) printf("\33[0;33m %d\33[0m", texto)
#define azul(texto) printf("\33[0;34m %d\33[0m", texto)
#define roxo(texto) printf("\33[0;35m %d\33[0m", texto)
#define ciano(texto) printf("\33[0;36m %d\33[0m", texto)
#define cinzaclaro(texto) printf("\33[0;37m %d\33[0m", texto)
#define pretoacinzentado(texto) printf("\33[1;30m %d\33[0m", texto)
#define vermelhoclaro(texto) printf("\33[1;31m %d\33[0m", texto)
#define verdeclaro(texto) printf("\33[1;32m %d\33[0m", texto)
#define amarelo(texto) printf("\33[1;33m %d\33[0m", texto)
#define azulclaro(texto) printf("\33[1;34m %d\33[0m", texto)
#define roxoclaro(texto) printf("\33[1;35m %d\33[0m", texto)
#define cianoclaro(texto) printf("\33[1;36m %d\33[0m", texto)