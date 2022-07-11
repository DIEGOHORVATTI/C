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

// fscanf ler arquivo
// ponteiro de arquivo, typos de dados, dados

typedef struct{
  char nome[100];
  int opcao, idade;
  float altura;
}sPessoa;

void escrever(char f[]) {

  FILE *file = fopen(f, "w");

  sPessoa pessoa;

  if(file) {
      do{
        printf("\n Digite nome: ");
        scanf("%99[^\n]", pessoa.nome);

        printf(" Digite idade: ");
        scanf("%i", &pessoa.idade);

        printf(" Digite altura: ");
        scanf("%f", &pessoa.altura);

        fprintf(file, "%s %d %.2f\n", pessoa.nome, pessoa.idade, pessoa.altura);
        printf("\n Inserir novo registro [0]não, [1]sim: ");
        scanf("%d", &pessoa.opcao);

        getchar();

      }while(pessoa.opcao == 1);

      fclose(file);

  }else{
    printf("\n ERRO ao abrir arquivo!\n");
  }
}

void ler(char arquivo[]){

  FILE *file = fopen(arquivo, "r");

  sPessoa pessoa;

  if(file){

    printf("\n Dados lidos do arquivo\n");

    // lendo nome, idade e altura de um arquivo texto com a função fscanf
    for (int i = 0; fscanf(file, "%s %d %.2f", pessoa.nome, &pessoa.idade, &pessoa.altura) != -1; i++){
      fscanf(file, "%s %d %.2f", pessoa.nome, &pessoa.idade, &pessoa.altura);
      printf("\n [%d] {\n  Nome: %s\n  Idade: %d\n  Altura: %.2f\n }\n", i + 1, pessoa.nome, pessoa.idade, pessoa.altura);
    }
    
    fclose(file);
  }else{
    printf("\n ERRO ao abrir arquivo!\n");
  }
  
}

int main() {

  char nome[] = {"./texto.txt"};

  escrever(nome);

  ler(nome);

  return 0;
}