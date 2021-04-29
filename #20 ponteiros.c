#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
	int variavel = 250;//variavel inteira com valor 250
	int *ponteiro;//ponteiro para a variavel
	int exibe;//variavel que vai exibir o valor 250
	
	ponteiro = &variavel;//ponteiro esta apontando para o endereço da variavel
	
	exibe = *ponteiro; //a variavel exibe recebe o conteudo do endereço para o qual o ponteiro aponta
	
	printf("\n%d\n", exibe);
		
	system("PAUSE");
	return 0;
}
