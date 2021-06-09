#include <stdio.h>
#include <stdlib.h>


//Função Principal
void main()
{
	//definindo variavel
	int a=5,b=10,c=15;
	char d='x';
	
	//maior
	if(a > 2)
	{
		printf("\n %d eh maior que 2",a);
	}
	
	//maior ou igual
	if(c >= b)
	{
		printf("\n %d eh maior ou igual que %d",c,b);
	}
	//menor
	if(a<=10)
	{
		printf("\n %d menor ou igual a 10",a);
	}
	//Diferente
	if(c !=10)
	{
		printf("\n %d nao eh 10",c);
	}
	if(d != 'a')
	{
		printf("\n %c nao eh a", d);
	}
	
	// pausa o programa
	system("pause");
}









