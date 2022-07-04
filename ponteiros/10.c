#include <stdio.h>

// ponteiro de ponteiro

int main(){

  int A=10, *B, **C;

  B = &A;
  C = &B;

  printf("\nEndereço de A: %p \nConteudo de A: %d", &A, A);
  printf("\n\nEndereço de B: %p \nConteudo de B: %p", &B, B);

  printf("\n\nConteudo apontado por B: %d", *B);

  printf("\n\nEndereço de C: %p \nConteudo de C: %p", &C, *C);

  printf("\n\nConteudo apontado por C: %d", **C);

  return 0;
}