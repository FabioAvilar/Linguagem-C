#include <stdio.h>
#include <stdlib.h>


//Este � o projeto da aula 2
//do curso de linguagem C


int main (int argc, char *argv[])
{
	int numero;//isto � uma variavel
	
	printf("Digite um numero: ");//imprime a frase na tela
	scanf("%d", &numero);//l� um numero que usuario digitar
	getchar();//limpa o buffer do teclado do PC
	
	printf("O numero eh igual ha: %d\n\n",numero);
	
	system("PAUSE");
	return 0;
}

