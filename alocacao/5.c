#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//matriz dinamica

int main(){
    
  srand(time(NULL));
    
  int **mat;

  mat = malloc(4 * sizeof(int*));

  for(int i = 0; i < 4; i++)
    mat[i] = malloc(3 * sizeof(int));

  for (int j = 0; j < 4; j++){
    for (int i = 0; i < 4; i++)
      mat[i][j] = 10 +(rand() % 40);
  }

  for (int j = 0; j < 4; j++){
    for (int i = 0; i < 4; i++)
      printf(" %d", mat[i][j]);
    printf("%n");
  }

  return(0);
}