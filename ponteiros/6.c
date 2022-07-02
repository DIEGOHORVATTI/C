/*
  Faça a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros. 
  Em seguida, encontre e imprima a somatória de cada uma das colunas da matriz. Ao final, imprima
  também a somatória de todas as colunas.
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 5


int main(void){

  int soma_coluna_1, soma_coluna_2, soma_coluna_3, soma_coluna_4, soma_coluna_5;
  soma_coluna_1=soma_coluna_2=soma_coluna_3=soma_coluna_4=soma_coluna_5=0;
  srand(time(NULL)); //seed semente 

  /*Matriz quadrada => A[n]x[m]
    n => n = linhas
    m => colunas
  */
  
  //atribuição de valores randômicos a valores da matriz
  int matriz[LINHAS][COLUNAS];
  for ( int j=0; j < COLUNAS; j++ ){
    for ( int i=0; i < LINHAS; i++ ){
      matriz[i][j] = rand() % 100;
    }
  }

  //soma coluna 1
  for (int i = 0; i < LINHAS; i++){
    soma_coluna_1+=matriz[i][0];
    printf(" %d", matriz[i][0]);
  }    
  printf("\n soma coluna 1: %d \n", soma_coluna_1);
  printf("-------------------\n\n");

  //soma coluna 2
  for (int i = 0; i < LINHAS; i++){
    soma_coluna_2+=matriz[i][1];
    printf(" %d", matriz[i][1]);
  }    
  printf("\n soma coluna 2: %d \n", soma_coluna_2);
  printf("-------------------\n\n");

  //soma coluna 3
  for (int i = 0; i < LINHAS; i++){
    soma_coluna_3+=matriz[i][3];
    printf(" %d", matriz[i][3]);
  }    
  printf("\n soma coluna 3: %d \n", soma_coluna_3);
  printf("-------------------\n\n");

  //soma coluna 3
  for (int i = 0; i < LINHAS; i++){
    soma_coluna_3+=matriz[i][3];
    printf(" %d", matriz[i][3]);
  }    
  printf("\n soma coluna 3: %d \n", soma_coluna_3);
  printf("-------------------\n\n");

  //soma coluna 5
  for (int i = 0; i < LINHAS; i++){
    soma_coluna_5+=matriz[i][4];
    printf(" %d", matriz[i][4]);
  }    
  printf("\n soma coluna 5: %d \n", soma_coluna_5);
  printf("-------------------\n\n");
  

  //debug de matriz
   for ( int j=0; j < COLUNAS; j++ ){ //coluna
    printf(" %d-> ", j+1);
    for ( int i=0; i< LINHAS; i++ ){ //linha
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n\n Soma de todas as colunas: %d\n", (soma_coluna_1+soma_coluna_2+soma_coluna_3+soma_coluna_4+soma_coluna_5));

  return(0);
}