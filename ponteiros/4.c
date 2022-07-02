#include <stdio.h>

void imprimir(int *num){
  
  printf("Valor de kapa: %d\n", *num);

  *num = 20;
}

int main(){
  
  printf("Pasagem de valor por refêrencia\n\n");

  int kapa = 10;

  imprimir( &kapa );  

  printf("\nValor de kapa atualizado: %d\n", kapa);
  
  return 0;
}