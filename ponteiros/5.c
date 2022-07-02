/*
Faça a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros. 
Em seguida, encontre e imprima a somatória de cada uma das colunas da matriz. 
Ao final, imprima
também a somatória de todas as colunas.
*/

 /*Matriz quadrada => A[i]x[j]
    i => linhas
    j => colunas
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 5

int retonoSomaColuna(int coluna, int *vet_){
  int acumulador; acumulador=0;
  for(int i=0; i < LINHAS; i++){
    acumulador += vet_[i][coluna];
  }

  return(acumulador);
}

int main(){
    srand(time(NULL)); //seed semente 
    
    int vet_[LINHAS][COLUNAS];
    
    //atribuição de valores randomicos da matriz usando o rand
    for(int j=0; j < COLUNAS; j++){
      for(int i=0; i < LINHAS; i++){
        vet_[i][j] = (rand() % 5);
      }
      printf("\n");
    }
    
    // imprimir matrix
    for(int j=0; j < COLUNAS; j++){
      printf("[%d] -> ", j);
        for(int i=0; i < LINHAS; i++){
          printf(" %d", vet_[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for (int i=0; i < COLUNAS; i++){
      printf("\n[%d] -> %d", i+1, retonoSomaColuna(i, vet_) );
    }

    return 0;
}
