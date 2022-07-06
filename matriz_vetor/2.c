#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  srand(time(NULL));

  int soma=0;
  
  //atribição de debug de matriz
  int mat_1[3][3];
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      mat_1[i][j] = 1 + (rand() % 9);
      printf("  %d", mat_1[i][j]);
    }    
    printf("\n");
  }
  printf("%s", " ---------\n\n");

  //soma linha 2
  soma=0;
  for (int i = 0; i < 3; ++i){
    printf(" %d", mat_1[0][i]);
    soma+=mat_1[0][i];
    i == 3-1 ? printf("\n soma linha 2: %d\n\n", soma) : printf("");
  }

  //soma coluna 2
  soma=0;
  for (int i = 0; i < 3; ++i){
    printf(" %d", mat_1[i][1]);
    soma+= mat_1[i][1];
    i == 3-1 ? printf("\n soma coluna 2: %d\n\n", soma) : printf("");
  }

  //soma diagonal
  soma=0;
  for (int i = 0; i < 3; ++i){
    soma+=mat_1[i][i];
    printf(" %d", mat_1[i][i]);
    i == 3-1 ? printf("\n soma diagonal: %d\n\n", soma) : printf("");
  } 

  //soma diagonal inversa
  soma=0;
  for (int i = 2; i >= 0; --i){
    soma+=mat_1[i][i];
    printf(" %d", mat_1[i][i]);
    i == 0 ? printf("\n soma diagonal inversa: %d\n\n", soma) : printf("");
  }

  //soma diagonal segundaria
  soma=0;
  for (int i=3-1; i >= 0 ; i--){       
    printf(" %d", mat_1[i][(3-1)-i]);
    soma += mat_1[i][(3-1)-i];
    i == 0 ? printf("\n soma diagonal segundaria: %d \n\n", soma) : printf("");
  }

  //soma diagonal segundaria inversa
  soma=0;
  for (int i=0; i <= 3-1 ; i++){
    printf(" %d", mat_1[i][(3-1)-i]);
    soma += mat_1[i][(3-1)-i];
    i == 3-1 ? printf("\n soma diagonal segundaria inversa: %d", soma) : printf("");
  }

  return(0);
}