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