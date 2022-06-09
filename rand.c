#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define POSITION 1000

int main(void){

  int matriz[POSITION][POSITION];
  
  srand(time(NULL)); //seed semente 

  for( int j=0; j < POSITION; j++){
    for( int i=0; i < POSITION; i++){
      matriz[i][j] = rand() % POSITION;
    }
  }

  for( int j=0; j < POSITION; j++){
    for( int i=0; i < POSITION; i++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  return(0);
}