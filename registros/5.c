#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ESTUDANTES 3

/*
  Foram digitadas três linhas, onde cada uma das linhas contém o nome e a nota de
  um aluno. Escreva um programa que leia essas informações e monte uma tabela onde
  a primeira coluna é o nome e a segunda coluna é a nota.
*/

typedef struct{
  char nome[MAX_ESTUDANTES][50];
  float nota;
}sEstudante;

int main(){
  
  sEstudante estudantes[MAX_ESTUDANTES];

  for (int i = 0; i < MAX_ESTUDANTES; i++){
    printf(" Estudante[%d] [nome nota]: ", i+1);
    scanf("%s%f", &estudantes[i].nome, &estudantes[i].nota);
  }

  printf("\n\tNome\tNota\n");
  for (int i = 0; i < MAX_ESTUDANTES; i++){
    printf("\t%s\t%.1f\n", estudantes[i].nome, estudantes[i].nota);
  }

  return(0);
}