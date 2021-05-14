#include <stdio.h>
#include <stdlib.h>

/*
	Regras de escopo, variaveis locais
*/

void function();  //Prototipo da Função

//Variaveis Globais

int x,y,z;


int main(int argc,char*argv[])
{
	int a,b,c,d;
	
	a=100;
	b=200;
	c=300;
	d=400;
	
	printf("Na funcao MAIN a=%d,b=%d,c=%d,d=%d",a,b,c,d);
	
	function();
	
	
	system("PAUSE");
	return 0;
}//end main


//  --- Desenvolvimento da Função Auxiliar ---

void function()
{
	int a,b,c,d; //variavel local da funçao function	
	
	a=33;
	b=44;
	c=55;
	d=66;
	
	if(a<b)
	{
		int z=30;
		
		printf("\n\n z=%d\n\n",z);
	}
	
	printf("Na funcao FUNCTION a=%d,b=%d,c=%d,d=%d\n\n", a,b,c,d);
	
}//end function













