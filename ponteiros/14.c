#include <stdio.h>

/* 
  Issmplemente a função strcpy (char *destino, char *origem) 
  usando ponteiros. 
*/

int strcpy(char *destino, char *origem){
  
  int i=0;
  while( *(origem+i) != '\0'){
    *(destino+i) = *(origem+i);
    i++;
  }

  return(i);
}

int main(){
   
  char destino[10] = {"kapa"};
  char origem[25] = {"Bom dia"};

  strcpy(destino, origem);

  printf("\n Destino: %s, %d", destino, strcpy(destino, origem));

  return 0;
}