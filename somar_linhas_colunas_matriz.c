#include <stdio.h>

int main(void){

  int mat_1[3][3];
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      mat_1[j][i] = j;
      mat_1[j][i] = i;
      printf(" %d", mat_1[j][i]);
    }    
    printf("\n");
  }
  //printf(" x0 y%d", mat_1[0][1]);

  return(0);
}