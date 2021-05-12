#include <stdio.h>
#include <stdlib.h>

/*
	Funções que retornam valores inteiros
	void
	
	tipo nome(parametros)
	
	nome(parametros)
*/

//prototipos das funções auxiliares
int soma(int num1, int num2);
int subt(int num1, int num2);
int mult(int num1, int num2);
int divi(int num2, int num2);

//Função Principal
int main(int argc,char*argv[])
{
	int resultado = soma(25,25);
	
	printf("%d\n",resultado);
	
	
	
	system("PAUSE");
	return 0;
}//end



//Funçoes Auxiliares

int soma(int num1, int num2)
{
	return (num1 + num2);
}//end soma

int subt(int num2, int num2)
{
	return (num1 - num2);
}//end subt

int mult(int num1,int num2)
{
	return (num1 * num2);
}//end mult

int divi(int num1, int num2)
{
	return (num1/num2);
}//end divi







