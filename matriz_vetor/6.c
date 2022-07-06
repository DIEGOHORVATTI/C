#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//matriz kernel ou matriz conjugada ou matriz transposta

int main(){


  textcolor(6);

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
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  //tres primeiras colunas e linhas
  for(int j = 0; j < 3; j++){
    for (int i = 0; i < 3; i++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }

  //tres primeiras colunas e 3 ulimas linhas
  printf("\n");
  for(int j=0; j < 3; j++){
    for (int i=7; i < 10; i++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }
  
  printf("\n");
  //tres ultimas colunas e 3 primeiras linhas
  for(int j=7; j < 10; j++){
    for (int i=0; i < 3; i++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  //tres ultimas colunas e linhas
  for(int j=7; j < 10; j++){
    for (int i=7; i < 10; i++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;
}