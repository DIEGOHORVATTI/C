#include <stdio.h>

typedef struct{
  char apelido[20];
}sApelido;

typedef struct{
  sApelido nick;
  
  char nome[50],
    sexo[3],
    dataNacimento[12];
  int cpf;
} sFichaUser;

sFichaUser lerUser(){
  sFichaUser user;

  printf("\n---------- Cadastro de User -----------\n\n\n");

  printf("Nome: ");
  fgets(user.nome, 50, stdin);

  printf("Sexo[M, F]: ");
  fgets(user.sexo, 3, stdin);

  printf("Data de Nacimento: ");
  fgets(user.dataNacimento, 12, stdin);

  printf("Apelido: ");
  fgets(user.nick.apelido, 20, stdin);

  printf("cpf: ");
  scanf("%d", &user.cpf);

  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome: %s", user.nome);
  printf("Sexo: %s", user.sexo);
  printf("Data de Nacimento: %s", user.dataNacimento);
  printf("Apelido: %s", user.nick.apelido);
  printf("cpf: %d", user.cpf);
}

int main(){

  sFichaUser user = lerUser();

  return 0;
}