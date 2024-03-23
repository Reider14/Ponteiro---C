#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 10;
	int *p;
	p = &n;
	
	// * para obter o conteudo do ponteiro
	printf("Conteudo apontado por p: %d \n",*p);
	// * para obter o endereco do ponteiro
	printf("O endereco de p é: %p \n", &p);
	
	*p = 12;
	
	printf("Conteudo apontado por p: %d \n",*p);   
	printf("Conteudo de n: %d \n", n);
	
  	system("pause");
  	
	return 0;
}
