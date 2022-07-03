#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  Desenvolva um algoritmo que crie uma variável do tipo 
  
  struct com os seguintes dados (relativos a 5 clientes): 
  código, 
  nome, 
  endereço, 
  data de nascimento 
    (deve ser um vetor de 3 posições onde armazene 
    dia na primeira posição, 
    mês na segunda e 
    ano na terceira), 
  sexo,
  valor total devido, 
  valor total em crédito, 
  idade e 
  status do cadastro (ativo ou inativo). 
  
  Quando o usuário executar o algoritmo, o mesmo deve cadastrar os clientes e ao térmico dos cadastros,
  deve emitir um relatório com os dados dos clientes cadastrados. Antes da finalização do
  algoritmo, deve ser emitida uma mensagem perguntando ao usuário se ele deseja executar o
  algoritmo novamente, em caso afirmativo o algoritmo deve ser executado novamente, em caso
  negativo, deve ser emitida uma mensagem alertando o usuário do final de execução do
  algoritmo.
*/

#define TAM_CLIENTES 5
#define TAM_NOME 100
#define SEXO 100
#define TAM_ENDERECO 80
#define MAX_CODIGO 5000
#define MAX_CREDITO 2000

typedef struct{
  char bairro[ TAM_ENDERECO ], 
       rua[ TAM_ENDERECO ]
  ;
  int casa;
}sEndereco;

typedef struct{
  int dia, 
      mes, 
      ano
  ;
}sDataNacimento;


typedef struct{
  sDataNacimento nacimento;
  sEndereco endereco;
  
  int codigo,
      totalDevido,
      idade,
      totalCredito
  ;
  char nome[TAM_NOME],
      sexo,
      status
  ;
}sCliente;

int dataAtual(){
  time_t mytime;
  mytime = time(NULL);
  struct tm tm = *localtime(&mytime);
  int data = (tm.tm_year + 1900);

  return (data);
}

sCliente cadastraCliente(){
  sCliente cliente;

    cliente.codigo = (rand() % MAX_CODIGO);

    printf("\nNome: ");
    fgets(cliente.nome, TAM_NOME, stdin);

    printf("\nEndereço[ Bairro ]: ");
    fgets(cliente.endereco.bairro, TAM_ENDERECO, stdin);
    printf("Endereço[ Rua ]: ");
    fgets(cliente.endereco.rua, TAM_ENDERECO, stdin);
    printf("Endereço[ NºCasa]: ");
    scanf("%i", &cliente.endereco.casa);

    printf("\nData Nacimento[ Dia ]: ");
    scanf("%i", &cliente.nacimento.dia);
    printf("Data Nacimento[ Mês ]: ");
    scanf("%i", &cliente.nacimento.mes);
    printf("Data Nacimento[ Ano ]: ");
    scanf("%i", &cliente.nacimento.ano);
    getchar();
    printf("\n[M => Masculino] [F => Ferminino]\nSexo[M, F]: ");
    scanf("%c", &cliente.sexo);

    printf("\n[A => Ativo] [I => Inativo]\nStatus[A, I]: ");
    scanf("%c", &cliente.status);

    cliente.totalCredito = (rand() % MAX_CREDITO);
    cliente.totalDevido = (rand() % MAX_CREDITO);
    cliente.idade = ((dataAtual()) - (cliente.nacimento.ano));

    getchar(); // Limpar buffer do teclado

  return( cliente );
}

int main(){
  sCliente cliente[TAM_CLIENTES];
  srand(time(NULL)); // seed semente
  
  int usuariosCadastrados=0;
  for (int i=0; i < TAM_CLIENTES; i++){
    char teclado;
    printf("\n----------| Cadastrar Cliente |----------");
    printf("\n[S => Sim] [N => Não]\nCadastar novo cliente?[S, N]: ");
    scanf("%c", &teclado);
    getchar(); // limpar buffer do teclado
    
    switch(teclado){
      case 'S':
      case 's':
        cliente[i] = cadastraCliente();
        usuariosCadastrados += (i+1);
      break;
      case 'N':
      case 'n':
        printf("\nFinal de execução do programa");
      break;
      default:
        printf("\nValor lido invalido\n");
        return (0);
      break;
    }
  }

  if(usuariosCadastrados != 0){
    for (int i = 0; i < TAM_CLIENTES; i++){
      printf("\n---------| Imprimir Cliente[%d] |---------\n", (i+1) );

      printf("\nCódigo do cliente: %d", cliente[i].codigo );
      printf("\nNome do cliente: %s", cliente[i].nome );
      printf("Endereço: [Bairro]:%s", cliente[i].endereco.bairro);
      printf("Endereço: [Rua]: %s", cliente[i].endereco.rua);
      printf("Endereço: [Numero]: %i",cliente[i].endereco.casa);
      printf("\nNacimento: %d/%d/%d", cliente[i].nacimento.dia, cliente[i].nacimento.mes, cliente[i].nacimento.ano);
      cliente[i].sexo == 'm'||'M' ? printf("\nSexo: Masculino") : printf("\nSexo: Ferminino");
      cliente[i].status == 'A'||'a' ? printf("\nSatus: Ativo") : printf("\nStatus: inativo");
      printf("\nTotal Fatura: %d", cliente[i].totalDevido);
      printf("\nTotal Credito: %d", cliente[i].totalCredito);
    }
  }

  return 0;
}