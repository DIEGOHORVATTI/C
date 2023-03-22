#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_MATRIZ 12

// matriz dinamica com ponteiros
// *(mat + i) -> acesar todos os indices do vetor
// *(*(mat + i) + j) -> acesar todos os indices de todos os vetores sendo assim uma matriz

int main(){
    
  srand(time(NULL));
    
  int **mat;

  mat = malloc(MAX_MATRIZ * sizeof(int*));

  for(int i = 0; i < MAX_MATRIZ; i++){
    mat[i] = malloc(MAX_MATRIZ * sizeof(int));
  }

  for (int j = 0; j < MAX_MATRIZ; j++){
    for (int i = 0; i < MAX_MATRIZ; i++){
      *(*(mat + i) + j) = 10+(rand() % 40);
    }
  }

  for (int j = 0; j < MAX_MATRIZ; j++){
    for (int i = 0; i < MAX_MATRIZ; i++){
      printf(" %d", *(*(mat+i) + j) );
    }
    printf("\n");
  }

  free(mat);

  return(0);
}