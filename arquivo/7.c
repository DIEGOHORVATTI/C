#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  w  -> Escrita (cria o arquivo caso ele não exista)
  r  -> leitura
  a  -> anexar (adicionar informação ao final de um arquivo que já existe)
  r+ -> leitura e escrita
  w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
  a+ -> leitura e escrita (adiciona ao final do arquivo)
*/

// escrever arquivo
// ler arquivo
// Organizando nosso código em procedimentos
// fputs escrever no arquivo
// feof(file) retorna true se fim do arquivo for encontrado
// !(feof(file)) nega o fim do arquivo o percorrendo até o final


void escrever(char f[]){
  FILE *file = fopen(f, "w");
  char texto[500];

  if (file){

    printf("\n [0] Digite uma frase: ");
    scanf("%499[^\n]", texto);
    getchar();

    // Digite uma frase ou 1 caracter para finalizar
    for(int i=0; strlen(texto) > 1; i++){

      fputs(texto, file);
      fputc('\n', file);

      printf(" [%d] Digite uma frase: ", i+1);
      scanf("%499[^\n]", texto);
      getchar();
    }
    fclose(file);
  }
  else{
    printf("\n ERRO ao abrir arquivo!\n");
  }
}

void ler(char f[]){
  FILE *file = fopen(f, "r");
  char texto[500];

  if (file){
    printf("\n\tTexto lido do arquivo\n\n");

    for( int i=0; !feof(file); i++){
      if (fgets(texto, 499, file)){
        printf(" [%d] --> %s", i, texto);
      }
    }

    fclose(file);
  }else{
    printf("\n ERRO ao abrir arquivo!\n");
  }
}

int main(){

  char nome[] = {"./texto.txt"};

  escrever(nome);
  ler(nome);

  return 0;
}