#include <stdio.h>

/*
  Faça um algoritmo onde no programa principal será feita a chamada a uma FUNÇÃO 
  onde será feita a leitura de 4 notas e o calculo da média, 
  em seguida, imprima as quatro notas e a media, 
  feito isso, volte ao programa principal, retornando a media encontrada, chame uma
  segunda FUNÇÃO levando a média como parâmetro e já dentro da função diga se o aluno está
  ou não aprovado. (média para aprovação 6.0). Após isso, volte ao programa principal, e emita
  uma mensagem dizendo se “deseja fazer novo calculo S/N”, se a resposta for “N” encerre o
  programa, caso contrário, faça novo calculo.
*/

#define TAM_NOTAS 4
#define TAM_MEDIA 6

int notas( float vet_notas[TAM_NOTAS] ){

  float nota, acumulador_soma;
  nota=acumulador_soma=0;

  for(int i=0; i < TAM_NOTAS; i++){

    printf("Nota[%d]: ", i+1);
    scanf("%f", &nota);
    vet_notas[i] = nota;
    acumulador_soma += nota;
  }

  return( (acumulador_soma/TAM_NOTAS) );
}

void verificaMedia( float media ){
  media >= TAM_MEDIA ? printf("\nAluno Aprovado") : printf("\nAluno Reprovado");
}

int main(void){

  float vet_[TAM_NOTAS], media;
  char teclado;

  for (int i = 0; i < TAM_NOTAS; i++){
    
    printf("\n----------| Cadastrar Aluno |----------");
    printf("\nDeseja fazer novo calculo S/N: ");
    scanf("%c", &teclado);
    printf("\n");
    getchar(); // limpar buffer do teclado

    switch (teclado){
    case 'S':
    case 's':
      
      //atribuindo valores do vetor ao puxar função notas
      media = notas(vet_);

      // printando notas
      for (int i = 0; i < TAM_NOTAS; i++){ printf("\nNota[%d]: %.1f", i + 1, vet_[i]); }
      
      //printando média
      printf("\n\nNota média: %.1f", media);

      //printando verificação de aprovação
      verificaMedia(media);
      printf("\n");

      break;
    case 'N':
    case 'n':
      printf("\nFinal de execução do programa");
      break;
    default:
      printf("\nValor lido invalido\n");
      return (0);
      break;
    }
  }

  return (0);
}