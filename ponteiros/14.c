#include <stdio.h>
#include <string.h>

/* 
  Issmplemente a função strcpy (char *destino, char *origem) 
  usando ponteiros. 
*/

void strcpy(char *destino, char *origem){

  for (int i = 0; i < strlen(origem); i++){
    *(destino+i) = *(origem+i);
  }
}

int main(){
   
  char destino[7] = "kapa";

  // strcpy(destino, "textoasdasdas");

  printf("\n Destino: %s", destino);

  return 0;
}