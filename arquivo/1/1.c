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

int main(){

  FILE *file;
  char letra;

  file = fopen("./texto.txt", "w+");

  if(file != NULL){
    
    printf("\nDigite um texto: ");

    // lendo e escrevendo vários caracteres
    scanf("%c", &letra); // lê o primeiro caracter

    while (letra != '\n'){                      
      // enquanto letra for diferente do ENTER
      fputc(letra, file);  // escreve letra no arquivo apontado por fila
      scanf("%c", &letra); // lê o próximo caracter do buffer do teclado
    }

    fclose(file);
  
  }else{ printf("\n Erro ao abri arquivo!"); }
  
  return 0;
}