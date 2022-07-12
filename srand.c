#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>

int main(){

  struct timeval tv; // tv -> timeval
  gettimeofday(&tv, 0);

  long int timeMilesegundos = tv.tv_usec * getpid(); // precisão de milesegundos
  srand(timeMilesegundos);

  /* Print 5 random numbers from 0 to 50 */
  for( int j = 0 ; j < 100 ; j++ ) {
    for( int i = 0 ; i < 10 ; i++ ) {
      printf(" %d", 10+(rand() % 90));
    }
    printf("\n");
  }
  
  return(0);
}