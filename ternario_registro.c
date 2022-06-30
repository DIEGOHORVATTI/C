#include <stdio.h>

//passagens de bagagem preços - tangoo companhia aerea

/*
2) Faça um algoritmo que tendo como dados de entrada a altura e o sexo de uma pessoa
(digite “M” para masculino e “F” para feminino), 
calcule o peso ideal dessa pessoa,
utilizando-se das seguintes fórmulas:
- Para sexo Masculino: peso_i = (450.7 * altura) / 10
- Para sexo feminico.: peso_i = (400.7 * altura) / 10
*/

//estrutura de registro de pessoa
typedef struct{
  float altura, peso;
  char sexo;
}sPessoa;

// atualiza pessoa com dados do teclado
sPessoa lerPessoa(){
  sPessoa pessoa;

  // atualizar altura de pessoa como float
  printf("\nDigite a altura: ");
  scanf("%f", &pessoa.altura );

  // Limpar buffer do enter
  getchar(); 

  // atualizar sexo da pessoa como sendo um caracter
  printf("Digite o sexo[F,M]: ");
  scanf("%c", &pessoa.sexo);

  // cppcheck-suppress uninitvar
  return pessoa;
}

// retorna Masculino, Femino, invalido =>  1, 2, 0
int verificaPessoa(sPessoa pessoa){
  switch (pessoa.sexo){
  case 'M':
  case 'm':
    return(1);
    break;

  case 'F':
  case 'f':
    return(2);
    break;

  default:
    return (0);
 } 
}

//imprimi dados da pessoa
void imprimirPessoa(sPessoa pessoa){
  
  printf("\nAltura pessoa: %.2f", pessoa.altura);
  
  // verifica se o sexo foi nulo/0 se sim da uma mensagem de erro e sai
  if( verificaPessoa(pessoa) == 0 ){
    printf("%s", "\nErro: sexo invalido");
  }else{
    // verifica é Masculino caso sim retorna peso com formula de Masculino caso contrario peso é calculado com formula de Femino
    verificaPessoa(pessoa) == 1 ? (pessoa.peso = ((450.7*pessoa.altura)/(10))) : (pessoa.peso = ((400.7*pessoa.altura)/(10)) );
    
    // 1º ternario verifica se o sexo é 1 imprimindo Masculino caso contrario printa que é Femino
    verificaPessoa(pessoa) == 1 ? printf("\nSexo: %s", "Masculino") : printf("\nSexo: %s", "Femino");

    // Imprimir peso
    printf("\nPeso: %.1f", pessoa.peso);
  }
  
  //fazer tudo que tava em cima em uma só linha usando operador ternário
  //verificaPessoa(pessoa) == 0 ? printf("%s", "\nErro: sexo invalido") : verificaPessoa(pessoa) == 1 ? printf("\nSexo: %s\nPeso: %.1f", "Masculino", ( (450.7*pessoa.altura)/(10) ) ) : printf("\nSexo: %s\nPeso: %.1f", "Femino", ( (400.7*pessoa.altura)/(10) ) );
}

int main(){
  
  sPessoa pessoa;

  //ler pessoa
  pessoa = lerPessoa();

  //imprimir pessoa
  imprimirPessoa(pessoa);
  
  return 0;
}