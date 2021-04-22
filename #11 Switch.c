#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int opcao;
	int valor;
	
	printf("Converter \n");
	printf("1: decimal para hexadecimal\n");
	printf("2: hexadecimal para decimal\n");
	scanf("%d", &opcao);
	getchar();
	
	switch(opcao)
	{
		
		case 1:
			printf("\nInforme o valor em decimal: ");
			scanf("%d", &valor);
			getchar();
			printf("%d em hexadecimal eh: %x\n\n", valor,valor);
			break;
		case 2:
			printf("\nInforme o valor em hexadecimal: ");
			scanf("%x", &valor);
			getchar();
			printf("%x em decimal eh: %d\n\n", valor,valor);
			break;
		default:
			printf("\nOpcao eh invalida\n");
			
	}
	
	
	system("PAUSE");
	return 0;
}
