#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Estrutura de Dados
/*
	struct
	
	Matrizes de Estrutura
	
	Atribuiçoes
*/




int main(int argc,char *argv[])
{
	
	struct minha_estrutura
	{
		int inteiro;
		double flutuante;
		
		
			
	}exemplo1, exemplo2;
	
	exemplo2.flutuante = 55.7;
	
		
	exemplo1 = exemplo2;
	
	printf("%lf \n", exemplo1.flutuante);
	
	system("PAUSE");
	return 0;
	
}
