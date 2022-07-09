#include <stdio.h>

//matriz dinamica

int main(){

  int **mat;

  mat = malloc(4 * sizeof(int*));


  for(int i = 0; i < 4; i++){
    mat[i] = malooc();
  }

  for (int i = 0; i < 4; i++)
  {
    mat[i] = malooc();
  }

  for (int i = 0; i < 4; i++)
  {
    mat[i] = malooc();
  }

  for (int i = 0; i < 4; i++)
  {
    mat[i] = malooc();
  }

  return 0;
}