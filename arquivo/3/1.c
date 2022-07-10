#include <stdio.h>
#include <stdlib.h>

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

#include <stdio.h>
#include <stdlib.h>

void escrever(char f[]) {
  FILE *file = fopen(f, "w");
  char letra;

  if(file) {
    printf("\nDigite um texto e pressione ENTER ao finalizar!");
    scanf("%c", &letra);
    while(letra != '\n') {
      fputc(letra, file);
      scanf("%c", &letra);
    }
    fclose(file);
  } else
    printf("\nERRO ao abrir arquivo!\n");
}

void ler(char f[]) {
  FILE *file = fopen(f, "r");
  char letra;

  if(file){
    printf("\n\tTexto lido do arquivo:\n");
    while(!feof(file)) {
      letra = fgetc(file);
      printf("%c", letra);
    }

    fclose(file);
  }
  else
    printf("\nERRO ao abrir arquivo!\n");
}

int main() {

  char nome[] = {"./texto.txt"};

  escrever(nome);
  ler(nome);

  return 0;
}