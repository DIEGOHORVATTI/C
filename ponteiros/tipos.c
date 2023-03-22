#include <stdio.h>

int main(){

  int *p_int;
  char *p_char;
  float *p_float;
  double *p_double;
  
  printf("--------------Bytes--------------\n\n");

  printf("Tamanho int: %lu", sizeof(int));
  printf("\nTamanho char: %lu", sizeof(char));
  printf("\nTamanho float: %lu", sizeof(float));
  printf("\nTamanho double: %lu", sizeof(double));
  printf("\n\nTamanho ponteiro int: %lu", sizeof(p_int));
  printf("\nTamanho ponteiro char: %lu", sizeof(p_char));
  printf("\nTamanho ponteiro float: %lu", sizeof(p_float));
  printf("\nTamanho ponteiro double: %lu\n", sizeof(p_double));

  return 0;
}