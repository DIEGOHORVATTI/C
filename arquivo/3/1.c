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
  printf("%s", f);
}

int main() {

  char nome[] = {"./texto.txt"};

  escrever(nome);

  return 0;
}