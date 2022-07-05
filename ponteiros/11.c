#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  Escreva um procedimento que receba um vetor inteiro, 
  seu tamanho e os endereços de duas variáveis inteiras, 
  menor e maior, 
  salve nestas variáveis o menor e o maior valor do vetor.
*/

/*
  Iniciar rand mínimo 
  (4+(rand() % 6)) = menor rand 4 até 10= 4+6 => 0 a 9 = 10 então se coloca o +1 para ir de 0 a 10
*/

void conferir(int tam, int *vet, int *maior, int *menor ){
  
  //atribuindo a variaveis de ponteiros o valor 0 de vet
  // cppcheck-suppress uninitvar
  *menor = *vet;
  *maior = *vet;
  
  //se a proxima posição for menor atualizar menor
  for (int i=0; i < tam; i++){
    if (*menor > *(vet+i)){
      *menor = *(vet + i);
    }
    if (*maior < *(vet+i)){
      *maior = *(vet + i);
    }
  }
  
}

int main(){
  
  //semente aleatória
  srand(time(NULL));
  
  //tam -> tamanho do vetor
  int maior, menor, tam = (1+(4 + (rand() % 6))), vet[tam];

  //atribuir numeros randomicos ao vetor
  for(int i = 0; i < tam; i++) *(vet+i) = rand() % 10; 

  conferir( tam, vet, &maior, &menor );
  
  printf(" Tamanho vetor: %d\n\n", tam);

  //debug de posições
  for (int i = 0; i < tam; i++) printf(" %d", i); printf("\n");
  for (int i = 0; i < tam; i++) printf(" ↓");  printf("\n");
  for (int i=0; i < tam; i++) printf(" %d", *(vet+i));

  printf("\n\n - %d", menor);
  printf("\n + %d", maior);

  return 0;
}