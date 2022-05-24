#include <stdio.h>

int main(void){


  if( 2 || 4 == 4 ){
    printf("\n %s", "|| - Uma das condições verdadeiras");
  } 
  if( 2 && 2 == 2 ){
    printf("\n %s", "&& - Duas condições verdadeiras");
  }
  if( 4 > 2 ){
    printf("\n %s", ">  - Maior que");
  }
  if( 2 < 4 ){
    printf("\n %s", ">  - Menor que");
  }
  if( 4 != 4 ){
    printf("\n %s", "!= - DIferente de");
  }
  else{
    printf("\n %s", "else Ultima condição");
  }


  return(0);
}