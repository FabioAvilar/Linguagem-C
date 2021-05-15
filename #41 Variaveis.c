#include <stdio.h>
#include <stdlib.h>

// --- Prototipo das Funçoes Auxiliares ---
void funcao1();
void funcao2();

// --- Variavel Global ---
int counter; //Variavel global para contagem

// -- Funçao Principal --
int main(int argc,char*argv[])
{
	
	counter=200;
	
	funcao1();
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenvolvimento das Funções Auxiliares ---

void funcao1()
{
	funcao2();
	
	printf("\n\nO valor de counter eh %d\n\n", counter);//imprime o valor 200
	
}//end funcao1

void funcao2()
{
	int counter;	
	
	for(counter = 1; counter < 20;counter++) printf("-");
	
}//end funcao2


















