#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415926535

/*
	Fun�oes que retornam valores n�o inteiros
*/

//Prot�tipo das fun��es
float teste(float numero);
float area_circulo(float raio);

int main(int argc,char*argv[])
{
	float raio_usuario, resultado;

	printf("Informe o valor do raio: ");
	scanf("%f", &raio_usuario);
	
	resultado = area_circulo(raio_usuario);
	
	printf("A area eh: %f\n", resultado);
	
	
	system("PAUSE");
	return 0;
}//end main

float teste(float numero)
{
	float retornar;
	
	retornar = numero;
	
	return retornar;
}

float area_circulo(float raio)
{
		//are do circulo = pi. R^2
	
	
	return pi*pow(raio,2);
}























