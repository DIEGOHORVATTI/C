#include <stdio.h>
#include <string.h>

int main(){
  char A[20] = "Program";
  char B[10] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'a', '\0'};

  printf("Caracteres em A = %d\n", strlen(A));
  printf("Caracteres em B = %d\n\n", strlen(B));

  printf("Tamanho de A = %d\n", ( (sizeof(A))/(sizeof(A[0])) ));
  printf("Tamanho de B = %d\n", ((sizeof(B)) / (sizeof(B[0]))));

  return 0;
}