#include <stdio.h>
#include <stdlib.h>

int main (int argc,char*argv)
{
	
	int opcao;
	int valor;
	printf("Conversor bases numericas\n");
	printf("1: Decimal para Hexadecimal\n");
	printf("2: Hexadecimal para Decimal\n");
	printf("\n\nInforme a opcao: ");
	scanf("%d", &opcao);
	getchar();
	
	if(opcao == 1)
	{
		printf("\n Informar o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em Hexadecimal eh: %x\n", valor, valor);
	}
	else if(opcao == 2)
	
	{
	
	printf("\nInformar o valor em Hexadecimal: ");
	scanf("%x", &valor);
	getchar();
	printf("%x em decimal eh: %d\n", valor,valor);
	}

	else printf("\nSua opcao eh invalida.\n\n\n");
	system("PAUSE");
	return 0;
}
