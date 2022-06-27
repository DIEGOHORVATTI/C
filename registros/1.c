// usando procedimento via parâmetro
#include <stdio.h>

//fgets(variavel, tamanho da string, entrada)


typedef struct{
  char nome[50], 
  sexo[3],
  dataNacimento[12];
  int idade;
}sFichaUser;

void imprimir(sFichaUser user){
  printf("\n---------- Cadastro de User -----------\n\n\n");

  printf("Nome: ");
  fgets(user.nome, 50, stdin);

  printf("Sexo[M, F]: ");
  fgets(user.sexo, 3, stdin);

  printf("Data de Nacimento: ");
  fgets(user.dataNacimento, 12, stdin);

  printf("Idade: ");
  scanf("%d", &user.idade);

  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome: %s", user.nome);
  printf("Sexo: %s", user.sexo);
  printf("Data de Nacimento: %s", user.dataNacimento);
  printf("Idade: %d", user.idade);
}

int main(void){

  
  sFichaUser user;

  imprimir(user);
  
  
  return(0);
}