#include <stdio.h>
#include <stdlib.h>
int main(){
  //Declara uma vari�vel int contendo o valor 10
int count = 10;
  //Declara um ponteiro para int
int *p;
  //Atribui ao ponteiro o endere�o da vari�vel int
  p = &count;
printf("O endereco de p � %p \n", &p);
  system("pause");
return 0;
}
