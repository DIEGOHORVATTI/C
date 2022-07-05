#include <stdio.h>

/*
  Crie um programa que contenha um array de inteiros com 10 elementos. 
  Imprima o elemento e o endereço de cada posição do array.
*/
#define TAM 10

int main(){

  int vet[TAM] = {4, 6, 8, 9, 7, 2, 7, 3, 1, 5};

  //debug de posições
  for (int i = 0; i < TAM; i++) printf(" %d", i); printf("\n");
  for (int i = 0; i < TAM; i++) printf(" ↓");  printf("\n");
  for (int i=0; i < TAM; i++) printf(" %d", *(vet+i));

  printf("\n\n");
  for (int i = 0; i < TAM; i++){ printf(" [%d]-> %p\n", i, vet+i);}
  printf("\n");

  return 0;
}