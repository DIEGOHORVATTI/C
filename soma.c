#include <stdio.h> //input -> ler[scanf] | ouput -> imprimir[printf]

// 1) Encontrar e apresentar o valor para Z 
// aplicando a seguinte fórmula: Z = ( L+ A * 2.3) / C)

// \n -> pular linha, quebra de linha
// \t -> tabulação, dar espaço

float soma(float l, float a, float c){
  // [ [(l+a)x(2.3)] / [c] ]
  return( ( ((float)(l + a) * (2.3)) / (c) ) ); //Z
}

void imprimirA(){
  float Z, A, L, C;

  printf("Digite A: "); // imprimindo A
  scanf("%f", &A);      // lendo A

  printf("Digite L: "); // imprimindo L
  scanf("%f", &L);      // lendo L

  printf("Digite C: "); // imprimindo C
  scanf("%f", &C);      // lendo C

  printf("\nZ = %.2f", soma(L, A, C));
}

void imprimirB(){
  float Z, L, A, C;
  // entrada
  printf("Entre com o valor de L: ");
  scanf("%f", &L);
  printf("Entre com o valor de A: ");
  scanf("%f", &A);
  printf("Entre com o valor de C: ");
  scanf("%f", &C);
  // processamento
  Z = (L + A * 2.3) / C;
  // saida
  printf("\nO valor de Z = %0.2f", Z);
}

int main(void){

  imprimirA();

  //imprimirB();

  return 0;
}