#include <stdio.h>
#include <math.h>

int main(){
    
    //setar variaveis inteiras
    int numero, expoente;

    //printar retorno para o usuario 
    printf("pode digitar\n");
    
    /*mandar valor digitado para sua variavel nome expecifica, obs: teria que ter 
    um tratamento de apenas excrever numeros e não letra ou outra coisa porem não
    é importante agora mas lembre-se disso para o futuro*/ 
    printf("numero: ");
    scanf("%i" , &numero);
    
    printf("expoente: ");
    scanf("%i" , &expoente);

    int result = pow(numero, expoente);

    printf("valor de pow é: ");
    printf("%i\n", result);
    
    int result_2 = numero*;
    printf("\nvalor de pow é: ");
    printf("%i\n", result_2);

    return(0);
    
}