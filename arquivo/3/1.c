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

void escrever(char arquivo[]) {
  
  FILE *file = fopen(arquivo, "w" );
  char texto[500];

  if (file){

    printf("\n Digite uma frase: ");
    scanf("%500[^\n]", texto);
    
    fputs(texto, file);

    fclose(file);
    
  }else { printf("\n Arquivo não encontrado!"); }

}

void imprimir(char arquivo[]){
  system("cat ./texto.txt");
}

int main() {

  char nome[] = {"./texto.txt"};

  escrever(nome);

  imprimir(nome);

  return 0;
}