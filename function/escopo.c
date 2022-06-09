#include <stdio.h>

int function_sqr(int x){
  x *= x; // variavel de x que fica em seu escopo local
  return(x);
}

int main(void){
  
  int valor=10;
  int x = 700;

  printf("Valor(com função): %d\nValor(sem função): %d \n", function_sqr(valor), valor);
  
  printf("\nValor escopo variavel local: %d\n", x );
  

  return(0);
}