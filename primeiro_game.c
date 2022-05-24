#include <stdio.h>
#include <stdlib.h>

int main(){
  printf(" ************************************\n");
  printf(" * Bem-vindo ao Jogo de Adivinhação *\n");
  printf(" ************************************\n");
	
	// setando número secreto
	int num_secret;   
	printf("%s", "\n Digite o numero secreto: ");	
	scanf("%d", &num_secret);
	printf(" O número ecreto é: %d\n", num_secret);

  return 0;
}
