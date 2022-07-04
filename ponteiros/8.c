#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[100];
  char author[100];
  int codigo;
}sObras;


void imprimir(sObras *obras){

  printf("\n\nNome author: %s", obras->author);
  printf("\nNome obra: %s", obras->nome);
  printf("\nNumero código:%d", obras->codigo);
}

int main(){

  sObras obras;
  
  sObras *ponteiro_obra;
  ponteiro_obra = &obras;

  strcpy(obras.author, "Eichiro oda");
  strcpy(obras.nome, "Osnepiece");
  obras.codigo = 11989;

  printf("\nNome author: %s", obras.author);
  printf("\nNome obra: %s", obras.nome);
  printf("\nNumero código:%d", obras.codigo);

  imprimir( ponteiro_obra );

  return 0;
}