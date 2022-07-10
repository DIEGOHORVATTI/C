#include <stdio.h>
#include <string.h>

//inverter string

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

int main(){
  
  char palavra[25] = {"Muito bem feito!"};

  printf("\n%s", palavra);
  inverter(palavra);

  printf("\n%s", palavra);

  return(0);
}