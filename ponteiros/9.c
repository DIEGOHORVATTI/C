#include <stdio.h>

// se usa o '*' qunado cria,os a variavel ponteiro e
// quando buscamos o conteudo apontado

int main(){

  int A=10, *B;

  B = &A;

  printf("\nEndereço de A: %p \nConteudo de A: %d", &A, A);
  printf("\n\nEndereço de B: %p \nConteudo de B: %p", &B, B);

  printf("\n\nConteudo apontado por B: %d", *B);

  return 0;
}