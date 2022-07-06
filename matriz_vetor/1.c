#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand(time(NULL));

  //tipo  identificador
  int     valor[10];

  /*Matriz quadrada => A[n]x[m]
    n => n = linhas
    m => colunas*/

  // preencher matriz com loop
  printf("%s", "\n1)\n");
  int mat_1[3][3];
  for (int j=0; j < 3; ++j){
    for (int i=0; i < 3; ++i){
      mat_1[i][j] = i+1;
      printf("\t%d", mat_1[i][j]);
    }    
    printf("\n");
  }

  //preencher matriz com valores hardcode de vetor
  printf("%s", "\n\n2)\n");
  int mat_2[3][3] = { 1, 2, 3 , 4 , 5 , 6 , 7 , 8 , 9};
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf("\t%d", mat_2[i][j]);
    }    
    printf("\n");
  }
  
  //matriz com linhas de tamnho automático
  printf("%s", "\n3)\n");
  int mat_3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf("\t%d", mat_3[i][j]);
    }    
    printf("\n");
  }

  //matriz com todos os valores zerados
  printf("%s", "\n4)\n");
  int mat_4[3][3] = { 0 };
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf("\t%d", mat_4[i][j]);
    }    
    printf("\n");
  }

  // preencher matriz com loop randomico de 1 á 9
  int mat_5[4][5];
  printf("%s", "\n5)\n");
  for (int j=0; j < 5; ++j){
    for (int i=0; i < 4; ++i){
      mat_5[i][j] = 1+(rand() % 9);
      printf("\t%d", mat_5[i][j]);
    }    
    printf("\n");
  }


  return(0);
}