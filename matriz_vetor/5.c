/*
  Faça a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros. 
  Em seguida, encontre e imprima a somatória de cada uma das colunas da matriz. 
  Ao final, imprima também a somatória de todas as colunas.
*/

/*
  passagem de matriz por referencia
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define LINHAS  4
#define COLUNAS 5

int somaMatriz(int j, int matriz[LINHAS][COLUNAS]){
  int soma=0;
  for (int i=0; i < LINHAS; i++){
    soma+= matriz[i][j];
  }
  
  return( soma );
}

int main(void){

  int soma_matriz, soma_matriz_completa;
  soma_matriz=soma_matriz_completa=0;

  srand(time(NULL)); //seed semente 

  /*Matriz quadrada => A[n]x[m]
    n => n = linhas
    m => colunas
  */
  
  //atribuição de valores randômicos a valores da matriz
  int matriz[LINHAS][COLUNAS];
  for ( int j=0; j < COLUNAS; j++ ){
    for ( int i=0; i < LINHAS; i++ ){
      matriz[i][j] = 10+(rand() % 40);
    }
  }

  //debug de matriz
  for ( int j=0; j < COLUNAS; j++ ){ //coluna
    printf(" %d-> ", j+1);
    for ( int i=0; i< LINHAS; i++ ){ //linha
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }
  
  //soma das colunas
  for (int i=0; i < COLUNAS; i++){
    printf("\n soma coluna[%d]: %d", i+1, somaMatriz(i, matriz));
    soma_matriz = somaMatriz(i, matriz);
    soma_matriz_completa += soma_matriz;
  }

  printf("\n\n Soma Colunas: %d\n", soma_matriz_completa);

  return(0);
}