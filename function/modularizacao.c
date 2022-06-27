#include <stdio.h>

/* 
  1 - modularize uma função de calculo
  2 - 50 alunos
  3 - 4 notas bimestrais( n1, n2, n3, n4 )
  4 - avaliar se aluno foi aprovado ou reprovado 
  5 - media >= 7 aprovado
*/

float soma( float n1, float n2, float n3, float n4 ){ 
  return( (n1+n2+n3+n4) / 4 ); 
}

float resultado( float soma ){

  printf("\nA média foi de %.1f\n", soma);

  if(soma >= 7){
    printf("Aluno aprovado\n");
  }else{
    printf("Aluno reprovado\n");
  }
}

int main(void){
  
  float n1, n2, n3, n4;

  for(int i; i >= 50; i++){
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    resultado( soma( n1, n2, n3, n4) );
  
  }

  return(0);
}