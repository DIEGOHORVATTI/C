#include <stdio.h>
#include <stdlib.h>
#define TAM_LOCACAO 5
// diferenã de malloc e calloc

int main(){

  int *vet_1, *vet_2;

  vet_1 = malloc(TAM_LOCACAO * sizeof(int) ); // não limpa posições da memória
  vet_2 = calloc(TAM_LOCACAO , sizeof(int) ); // limpa as posições da mamória

  printf("\nCom malloc: ");
  for(int i=0; i < TAM_LOCACAO; i++){
    printf(" %d", *(vet_1+i));
  }

  printf("\nCom calloc: ");
  for(int i=0; i < TAM_LOCACAO; i++){
    printf(" %d", *(vet_2+i));
  }
  
  return 0;
}