#include <stdio.h>

int main(){

  char palavra[20];

  printf("Vetor é um ponteiro\n\n");

  printf("%p\n", palavra);
  printf("%p\n", &palavra);
  printf("%p\n", &palavra[0]);

  return 0;
}