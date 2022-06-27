#include <stdio.h>
#define MAX 3

int main(){

  /*Matriz quadrada => A[i]x[j]
    i => i= linhas
    j => colunas
  */
    
  char matrizLetras[MAX][MAX]; //matriz quadrada de string 
  
  //atribuição de letras
  for(int j=0; j < MAX; j++){   //percorrer a coluna | começa no um e a cada interação ele incrementa +1 [++] e percorre a matriz de cima para baixo
    for(int i=0; i < MAX; i++){ //percorre a linha | cada interação também adiciona +1 e percorre a linha da esquerda para direita
     
      printf("Digite uma letra: "); //printar label do scansf | label = texto para referenciar um input de entrada não obrigatório porem util 
      scanf("%c", &matrizLetras[i][j]);  //ler letra e armazenar na matriz
      
    }
  }
  printf("\n");
  for(int j=0; j < MAX; j++){
    for(int i=0; i < MAX; i++){
      printf(" %c", matrizLetras[i][j]);
    }
    printf("\n");
  }

  
    
}
