#include <stdio.h>

int main(){

  int *p_int;
  char *p_char;
  float *p_float;
  double *p_double;
  
  printf("--------------Bytes--------------\n\n");

  printf("Tamanho int: %d", sizeof(int));
  printf("\nTamanho char: %d", sizeof(char));
  printf("\nTamanho float: %d", sizeof(float));
  printf("\nTamanho double: %d", sizeof(double));
  printf("\n\nTamanho ponteiro int: %d", sizeof(p_int));
  printf("\nTamanho ponteiro char: %d", sizeof(p_char));
  printf("\nTamanho ponteiro float: %d", sizeof(p_float));
  printf("\nTamanho ponteiro double: %d", sizeof(p_double));

  return 0;
}