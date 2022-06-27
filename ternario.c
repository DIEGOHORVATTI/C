#include<stdio.h>

int main(){

  if (4 != 4){ printf("\n %s", "!= - DIferente de"); } else{ printf("\n %s", "else Ultima condição"); }

  // ? -> se <condição> for verdadeira
  // : -> caso <condição> seja falsa

  4!=4 ? printf("\n %s", "!= - DIferente de") : printf("\n %s", "else Ultima condição");

  return 0;
}