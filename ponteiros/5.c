#include <stdio.h>

// Descobrir tamanho do vetor
// passar parâmetro de vetor para função

void multiplica(int vet[], int tam){
  
  for(int i = 0; i < tam; i++){
    vet[i] = vet[i] * 2;
  }
}

void imprimir(int vet[], int tam){
  
  for(int i = 0; i < tam; i++){
    printf(" %d\t", vet[i]);
  }
  printf("\n");
}

int main(){

  int vet[5] = { 1, 2, 3, 4, 5 };

  int tam = ( (sizeof(vet))/(sizeof(vet[0])) );

  printf("\n Tamanho do vetor: %d\n\n", tam);

  imprimir(vet, tam); 

  multiplica(vet, tam);

  imprimir(vet, tam);

  return 0;
}