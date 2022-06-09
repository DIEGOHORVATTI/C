#include <stdio.h>

/* faça uma função que retorna dois valores de um vetor de 5...1 sendo os parametros um maior e outro menor */



int main(void){
  
  int lol=4;
  int *lol_memoria;
  lol_memoria = &lol;

  printf(" valor real de lol: %d", lol);
  printf("\n valor de memória de lol: %p", &lol);

  printf("\n\n memória de lol_memoria: %p", &lol_memoria);
  printf("\n valor de memória de lol(referenciado): %d", *lol_memoria);

  printf("\n\n valor de memória de lol(referenciado): %p", *lol_memoria);

  return(0);
}