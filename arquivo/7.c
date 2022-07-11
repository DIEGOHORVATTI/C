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

// fprintf escrever no arquivo
// ponteiro de arquivo, typos de dados, dados 

void escrever(char f[]) {

  FILE *file = fopen(f, "w");
  char nome[100];
  int opcao, idade;
  float altura;

  if(file) {
      do{
        printf("\n Digite nome: ");
        scanf("%99[^\n]", nome);

        printf(" Digite idade: ");
        scanf("%i", &idade);

        printf(" Digite altura: ");
        scanf("%f", &altura);

        fprintf(file, "%s %d %.2f\n", nome, idade, altura);
        printf("\n Inserir novo registro [0]não, [1]sim: ");
        scanf("%d", &opcao);

        getchar();

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