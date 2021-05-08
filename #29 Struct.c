#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Estrutura de Dados
/*
	struct
*/


struct componente
{
		
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
	
}comp;


int main(int argc,char *argv[])
{
	
	printf("Tipo do componente__________________: ");
	fflush(stdin);
	fgets(comp.tipo,20,stdin);
	
	printf("Referencia do componete ____________: ");
	fflush(stdin);
	fgets(comp.referencia,4,stdin);
	
	printf("Numero da referencia________________: ");
	scanf("%c",&comp.num_ref);
	getchar();
	
	printf("Valor do componente_________________: ");
	scanf("%d", &comp.valor);
	
	printf("Unidade_____________________________: ");
	fflush(stdin);
	fgets(comp.unidade,10,stdin);
	
	printf("\n\n COMPONENTE CRIADO:\n\n");
	printf("%s\n", comp.tipo);
	printf("%s",comp.referencia);
	printf("%c",comp.num_ref);
	printf("\n Valor: %d", comp.valor);
	printf(" %s \n\n", comp.unidade);
	
	system("PAUSE");
	return 0;
	
}
