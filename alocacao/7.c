#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // inverter string

void inverter(char vet[]){
  int fim, aux, tam = strlen(vet);

  fim = tam-1;
  for (int i = 0; i < tam/2; i++){
    aux = vet[i];
    vet[i] = vet[fim];
    vet[fim] = aux;
    fim--;
  }

}

char* inverter_2(char vet[]){
  int i, fim, aux, tam = strlen(vet);
  char *novo = malloc( (tam+1) * sizeof(char) );

  fim = tam-1;
  for (i = 0; i < tam; i++){
    novo[fim] = vet[i];
    fim--;
  }

  novo[i] = '\0';
  return(novo);
  
}

int main(){

  char *p, palavra[25] = {"Muito bem feito!"};

  printf("\n %s", palavra);
  inverter(palavra);
  printf("\n %s", palavra);
  
  printf("\n\n %s", palavra);
  p = inverter_2(palavra);
  printf("\n %s", p);

  return(0);
}