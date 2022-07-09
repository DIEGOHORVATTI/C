#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//realocção dinamicos de vetores

int main(){

  srand(time(NULL));
  
  int tam, *vet;

  printf(" Digite o tamanho do vetor: ");
  scanf("%d", &tam);

  vet = malloc(tam * sizeof(int));
    
  if (vet){
    for(int i = 0; i < tam; i++)
      *(vet+i) = 10+(rand() % 80);
    printf("\n");

    for(int i = 0; i < tam; i++)
      printf(" %d", *(vet+i));
    printf("\n");
  
    printf(" Digite o novo tamanho do vetor: ");
    scanf("%d", &tam);

    vet = realloc(vet, tam);

    for(int i = 0; i < tam; i++)
      printf(" %d", *(vet+i));
    printf("\n");

  }

  free(vet);

  return 0;
}