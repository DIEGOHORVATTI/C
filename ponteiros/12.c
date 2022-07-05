#include <stdio.h>

/*
  Escreva um procedimento que troca os valores dos parâmetros recebidos. 
  Sua assinatura deve ser: void troca(float *a, float *b);
*/

void troca(float *a, float *b){
  
  float c;
  c = *a;
  *a = *b;
  *b = c;
}

int main(){
  
  float a=5;
  float b=6;

  printf(" a: %.f", a);
  printf("\n b: %.f", b);

  troca(&a, &b);

  printf("\n\n a: %.f", a);
  printf("\n b: %.f", b);

  return 0;
}