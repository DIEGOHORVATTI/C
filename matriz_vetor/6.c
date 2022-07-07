#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// cores de testo em linux bem topzinho ^^
#define preto(texto) printf("\33[0;30m %d\33[0m", texto)
#define vermelho(texto) printf("\33[0;31m %d\33[0m", texto)
#define verde(texto) printf("\33[0;32m %d\33[0m", texto)
#define marrom(texto) printf("\33[0;33m %d\33[0m", texto)
#define azul(texto) printf("\33[0;34m %d\33[0m", texto)
#define roxo(texto) printf("\33[0;35m %d\33[0m", texto)
#define ciano(texto) printf("\33[0;36m %d\33[0m", texto)
#define cinzaclaro(texto) printf("\33[0;37m %d\33[0m", texto)
#define pretoacinzentado(texto) printf("\33[1;30m %d\33[0m", texto)
#define vermelhoclaro(texto) printf("\33[1;31m %d\33[0m", texto)
#define verdeclaro(texto) printf("\33[1;32m %d\33[0m", texto)
#define amarelo(texto) printf("\33[1;33m %d\33[0m", texto)
#define azulclaro(texto) printf("\33[1;34m %d\33[0m", texto)
#define roxoclaro(texto) printf("\33[1;35m %d\33[0m", texto)
#define cianoclaro(texto) printf("\33[1;36m %d\33[0m", texto)
#define branco(texto) printf("\33[1;37m %d\33[0m", texto)

//matriz kernel ou matriz conjugada ou matriz transposta

int main(){

  srand(time(NULL));

  int matriz[10][10];

  //atribuição de matriz randomica
  for(int j = 0; j < 10; j++){
    for (int i = 0; i < 10; i++){
      matriz[i][j] = 10+(rand() % 40); // 10 á 40 = 50
    }
  }
  
  //debug matriz
  for(int j = 0; j < 10; j++){
    for (int i = 0; i < 10; i++){
      if(i < 3 && j < 3){
        amarelo(matriz[i][j]);
      }else if( i >= 7 && i <= 10 && j < 3){
        vermelho(matriz[i][j]);
      }else if( i < 3 && j >= 7 && j < 10){
        ciano(matriz[i][j]);
      }else if( i >= 7 && i < 10 && j >= 7 && j < 10){
        azul(matriz[i][j]);
      }else if( i >= 4 && i < 6 && j >= 4 && j < 6){
        roxoclaro(matriz[i][j]);
      }else{
        branco(matriz[i][j]);
      }
      
    }
    printf("\n");
  }

  /* ---------- */

  printf("\n");
  //tres primeiras colunas e linhas
  for(int j = 0; j < 3; j++){
    for (int i = 0; i < 3; i++){
      amarelo(matriz[i][j]);
    }
    printf("\n");
  }

  //tres primeiras colunas e 3 ulimas linhas
  printf("\n");
  for(int j=0; j < 3; j++){
    for (int i=7; i < 10; i++){
      vermelho(matriz[i][j]);
    }
    printf("\n");
  }
  
  printf("\n");
  //tres ultimas colunas e 3 primeiras linhas
  for(int j=7; j < 10; j++){
    for (int i=0; i < 3; i++){
      ciano(matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  //tres ultimas colunas e linhas
  for(int j=7; j < 10; j++){
    for (int i=7; i < 10; i++){
      azul(matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  //quarta linha a sexta linhas e quarta coluna a sexta coluna : coluna e linha do meio
  for(int j=4; j < 6; j++){
    for (int i=4; i < 6; i++){
      roxoclaro(matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}