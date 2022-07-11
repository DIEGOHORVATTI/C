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


void escrever(char f[]) {
  FILE *file = fopen(f, "w");
  char nome[100];
  int opcao, idade;
  float altura;

  if(file) {
      do{
        printf("Digite nome, idade e altura: ");
        scanf("%99[^\n]%d%f", nome, &idade, &altura);
        fprintf(file, "%s %d %.2f\n", nome, idade, altura);
        printf("\nDigite 1 para inserir outro registro. ");
        scanf("%d", &opcao);
        scanf("%c");
      }while(opcao == 1);
      fclose(file);
  }else{
    printf("\n ERRO ao abrir arquivo!\n");
  }
}

int main() {

  char nome[] = {"./texto.txt"};

  escrever(nome);

  return 0;
}