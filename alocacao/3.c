#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//alocação dinamicos de vetores

int main(){

  srand(time(NULL));
  
  int tam, *vet;

  printf(" Digite o tamanho do vetor: ");
  scanf("%d", &tam);

  vet = malloc(tam * sizeof(int));
    
  for(int i = 0; i < tam; i++)
    *(vet+i) = 10+(rand() % 80);
  printf("\n");

  for(int i = 0; i < tam; i++)
    printf(" %d", *(vet+i));
  printf("\n");

  free(vet);

  return 0;
}