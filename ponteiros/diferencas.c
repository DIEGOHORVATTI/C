#include <stdio.h>

int main(void){

  // O ponteiro é uma variavel que amarzena um endereço de memória
  
  // & = Endereço Memória => onde fica o endereço em si 
  // p = ponteiro         => pode amarzenar muitos endereços

  int num=4;
  int *num_;
  num_ = &num;

  printf(" num valor ----------: %d\n", num);   // num valor
  printf(" num memória --------: %p\n", &num);  // num memória
  printf(" num_ valor----------: %p\n", num_);  // valor de memória do num
  printf(" num_ memória -------: %p\n", &num_); // valor da memória do num_
  printf(" num_ apontado ------: %d\n", *num_); //  conteudo apontado para ponteiro

  return(0);
}