#include <stdio.h>

int main(void){
  //tipo  identificador
  int     valor[10];

  /*Matriz quadrada => A[n]x[m]
     n => n = linhas
     m => colunas*/

  printf("%s", "\n1)---------------------------------\n");
  /*
   3*3 = 9 -> posições 1 2 3 4 5 6 7 8 9
   
   0 1 2
   0 1 2
   0 1 2
  */
  int mat_1[3][3];
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      mat_1[j][i];
      printf(" %d", mat_1[j][i]);
    }    
    printf("\n");
  }
  printf(" x0 y%d", mat_1[0][1]);
  
  printf("%s", "\n2)--------------\n");

  /*
   1 2 3
   4 5 6
   7 8 9
  */
  int mat_2[3][3] = { 1, 2, 3 , 4 , 5 , 6 , 7 , 8 , 9};
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf(" %d", mat_2[j][i]);
    }    
    printf("\n");
  }

  printf("%s", "\n3)--------------\n");

  /*
   1 2 3
   4 5 6
   7 8 9
  */
  int mat_3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf(" %d", mat_3[j][i]);
    }    
    printf("\n");
  }

  printf("%s", "\n4)--------------\n");

  /*
   0 0 0
   0 1 2
   0 1 2
  */
  //int mat_4[3][3] = { 0 };
  int mat_4[][3] = { 0 };
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf(" %d", mat_4[j][i]);
    }    
    printf("\n");
  }


  return(0);
}