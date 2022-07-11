#include <stdio.h>
#include <stdlib.h>

int main(){

  char lol[500];

  printf("\n # para finalizar: ");
  scanf("%[^#]", lol);
  printf("\n --> %s", lol);

  return 0;
}
