#include <stdio.h>

int main(void){

  //EM = Endereço Memória
  
  int lol=4;
  int *lol_memoria;
  lol_memoria = &lol;

  printf(" lol: %d", lol);
  printf("\n lol EM: %p", &lol);
/* 
  printf("\n\n memória de lol_memoria: %p", &lol_memoria);
  printf("\n valor de memória de lol(referenciado): %d", *lol_memoria);

  printf("\n\n valor de memória de lol(referenciado): %p", *lol_memoria);
 */
  return(0);
}