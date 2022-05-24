#include <stdio.h>
#include <stdlib.h>

/*
  Quanto maior a dificuldade maior o numero aleatório
  6 tentativas 
  Escrever um numero aleatório
  verificar se o usuario digitou o numero certo
  caso contrario dar dicas do numero certo 
*/

int main(){

  int n1 = rand()%100;
  printf("%d", n1);

  int nivel, numero, aleatorio;
  float pontos=1000;
  
  char header[] = "             P\n            /\\\n        P  /__\\  P\n       /_\\_|__|_/_\\";
  char body[] = "   n_n | | |..| | | n_n     \n   |_|_|nnnn  nnnn|_|_|     Bem-vindo ao\n   |'''' | |==| | ''''|  Jogo de Adivinhação!";
  char footer[] = "   |_____| '==' |_____|\n         \\_|==|_/";
  //printf("%s\n%s\n%s\n\n", header, body, footer );

  printf(" %s", "Qual o nível de dificuldade?[1, 2, 3]: ");
  scanf("%d", &nivel);

  switch(nivel){
    case 1: 
      break;
    case 2: 
      break;
    case 3: 
      break;
  }

  for (int i = 1; i <= 6; ++i){
    
    printf("\n -> Tentativa %d de 6: ", i );
    scanf("%d", &numero);

    if(numero < aleatorio){
      printf(" %s", "\n Menor que o numero secreto!\n");
      pontos-=166;
    } 
    else if(numero > aleatorio){
      printf(" %s", "\n Maior que o numero secreto!\n");
      pontos-=166;
    } 
    else{
      char carinha[] = "                  OOOOOOOO\n               OOOOOOOOOOOOOO\n            OOOOOOOOOOOOOOOOOOOO\n         OOOOOOO  OOOOOOOOO  OOOOOO\n       OOOOOO       OOOOO     OOOOOO\n     OOOOOOOOO  #   OOOO   #  OOOOOOOO \n   OOOOOOOOOOO     OOOOOOO     OOOOOOOOO\n   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n    OOOO OOOOOOOOOOOOOOOOOOOOOOOOO OOOO\n     OOOO  OOOOOOOOOOOOOOOOOOOOOOO OOOO\n       OOOO  OOOOOOOOOOOOOOOOOOOO OOOO\n         OOOOO  OOOOOOOOOOOOOOO OOOO\n          OOOOOO  OOOOOOOOO  OOOOOO\n            OOOOOO         OOOOOO\n                OOOOOOOOOOOO\n                  OOOOOOOO";
      printf("%s", carinha);
      printf(" %s", "\n Numero secreto correto Parabens!!!!\n\n");
      printf(" Você fez %.2f pontos. Até a próxima!\n", pontos );
      return(0);
    }
  }

  printf(" %s", "\n [Adios] Você esgotou todas as vidas\n    \\|/ ____ \\|/\n    @~/ ,. \\~@\n   /_( \\__/ )_\\    \n      \\__U_/");


  return 0;
}