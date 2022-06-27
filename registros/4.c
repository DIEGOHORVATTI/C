#include <stdio.h>

typedef struct{
  int dia, mes, ano;
}sDataNacimento;

typedef struct{
  char apelido[20];
}sApelido;

typedef struct{
  sDataNacimento nacimento;
  sApelido nick;

  char nome[50], sexo[3];
  int cpf;
}sFichaUser;

sFichaUser lerUser(){
  sFichaUser user;

  printf("\n--- Cadastro de User ---\n\n");

  printf("\nNome: ");
  fgets(user.nome, 50, stdin);

  printf("Apelido: ");
  fgets(user.nick.apelido, 20, stdin);

  printf("Sexo[M, F]: ");
  fgets(user.sexo, 3, stdin);

  printf("Data de Nacimento[dd mm aaaa]: ");
  scanf("%d %d %d", &user.nacimento.dia, &user.nacimento.mes, &user.nacimento.ano);

  printf("cpf: ");
  scanf("%d", &user.cpf);
  getchar(); 

  return user;
}

void imprimirUser(sFichaUser user){
  printf("\n\n --- Imprimindo os dados da struct ---\n\n");
  printf("Nome: %s", user.nome);
  printf("Apelido: %s", user.nick.apelido);
  printf("Sexo: %s", user.sexo);
  printf("Data de Nacimento: %d/%d/%d", user.nacimento.dia, user.nacimento.mes, user.nacimento.ano);
  printf("\ncpf: %d", user.cpf);
}

int main(){

  sFichaUser users[3];

  for (int i=0; i < 3; i++){
    users[i] = lerUser();
  }

  for (int i=0; i < 3; i++){
    imprimirUser( users[i] );
  }
  
  return 0;
}