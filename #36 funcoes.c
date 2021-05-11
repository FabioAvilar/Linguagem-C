#include <stdio.h>
#include <stdlib.h>

void imprimir()
{
	printf("Mensagem\n");
	printf("Mensagem2\n");
	printf("Mensagem3\n");
	printf("Mensagem4\n");
}

void imprimir2()
{
	
	printf("Mensagem8\n");
}

void soma(int num1,int num2)
{
	int resultado;
	
	resultado = num1 + num2;
	
	printf("soma de num1 com num2: %d\n", resultado);
}
int main(int argc,char*argv[])
{
	
	imprimir();
	imprimir2();
	
	soma(5,7);
	
	system("PAUSE");
	return 0;
}
















