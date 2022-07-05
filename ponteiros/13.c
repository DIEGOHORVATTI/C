#include <stdio.h>

/*
  Considere a seguinte declaração: int A, *B, **C, ***D
  Sendo A um inteiro exiba o seu dobro, 
  o triplo e o quádruplo desse valor 
  utilizando apenas os ponteiros B, C e D. 
  O ponteiro B deve ser usada para calcular o dobro, C
  o triplo e D o quádruplo.
*/

int main(){

  int A, *B, **C, ***D;

  A = 5;
  B = &A;
  C = &B;
  D = &C;

  printf(" A normal: %d", A);
  printf("\n A dobro: %d", 2 * *B);
  printf("\n A triplo: %d", 3 * **C);
  printf("\n A quádruplo: %d", 4 * ***D);

  return 0;
}