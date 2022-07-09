#include <stdio.h>
#include <stdlib.h>

//alocação com calloc

int main(){
  int *x;
  char *y;

  x = calloc(1, sizeof(int));
  y = calloc(1, sizeof(char));

  if(x){
    printf("\nX: Memoria alocada com sucesso!\n");
    printf("x: %d\n", *x);
    *x = 50;
    printf("x: %d\n", *x);
  }
  else{
    printf("Erro ao alocar memoria!\n");
  }

  if(x){
    printf("\nY: Memoria alocada com sucesso!\n");
    printf("y: %c\n", *y);
    *y = 'a';
    printf("y: %c\n", *y);
  }
  else{
    printf("Erro ao alocar memoria!\n");
  }

  return 0;
}