#include <stdio.h>
#include <stdlib.h>
int main(){
  //Declara uma vari�vel int contendo o valor 10
int count = 10;
  //Declara um ponteiro para int
int *p;
  //Atribui ao ponteiro o endere�o da vari�vel int
  p = &count;
  printf("Conteudo apontado por p: %d \n",*p);   
  //Atribui um novo valor � posi��o de mem�ria apontada por p
  *p = 12;
  printf("Conteudo apontado por p: %d \n",*p);   
  printf("Conteudo de count: %d \n",count);
  system("pause");
return 0;
	// Ao alter o valor do conteudo onde *p aponta (endereco) automaticamente altera-se o de n
	
}
