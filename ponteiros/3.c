#include <stdio.h>

int main(){

  char palavra[20];

  /* 
    scanf("%19[^/n]", palavra);
    printf("%s", palavra);
  */

  printf("Vetor é um ponteiro\n\n");

  printf("%p\n", palavra);
  printf("%p\n", &palavra);
  printf("%p\n", &palavra[0]);

  return 0;
}