#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDANTES 3
//Como ler a nota de 3 estudantes e imprimir uma tabela?

typedef struct{
  char nomes[3][30];
  float nota;
}sEstudante;

int main(){
  
  sEstudante estudante[3];

  printf("\n---| Digite a nome e nota d estudante |---\n");

  for (int i=0; i < MAX_ESTUDANTES; i++){
    //printf("\nDigite nome estudante[%d]: ", i);
    //fgets( estudante[i].nomes, 30, stdin);

    printf("\nDigite nota estudante[%d]: ", i);
    scanf("%f", estudante[i].nota);
  }

  for (int i = 0; i < MAX_ESTUDANTES; i++){
    printf("\n%s\t%.2f", estudante[i].nomes, estudante[i].nota);
  }

  return(0);
}