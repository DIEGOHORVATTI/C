#include <stdio.h>
#define TAM_VETOR 5

/*
  acesar vetor por ponteiros 
*/

void imprimir(int vet[]){
  for (int i = 0; i < TAM_VETOR; i++){
    printf(" %d\t", *(vet+i));
  }
  
}

int main(){

  int vet[TAM_VETOR] = {5, 7, 4, 6, 0};

  imprimir(vet);

  return 0;
}