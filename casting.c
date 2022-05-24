#include <stdio.h>

int main(void){
  
  int dois=2;
  float tres_meio=3.5;

  printf(" 2+3,5= %.1f", (float)dois+tres_meio );           

  printf("\n 2+3,5= %d", dois+(int)tres_meio );

  printf("\n 2+3,5= %.1lf", (double)dois+(double)tres_meio );

  printf("\n 2+3,5= %d", (int)((double)dois+(double)tres_meio) );

  return(0);
}