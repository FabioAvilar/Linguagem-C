#include <stdio.h>
#include <stdlib.h>


int main(int argc, char*argv[])
{
	int vetor1[tam],vetor2[tam],i,produto=0;
	
	printf("Entrar com um valor do vetor1\n");
	for(i=0;i<tam;i++)
	{
		printf("Elemento %d", i);
		scanf("%d", &vetor1[i]);
		getchar();
	}
	
	printf("Entrar com um valor do vetor2\n");
	for(i=0;i<tam;i++)
	{
		printf("Elemento %d", i);
		scanf("%d", &vetor2[i]);
		getchar();
	}
	
	for(i=0;i<tam;i++) produto += vetor1[i] * vetor2[i];
	
	printf("O Produto escalar eh igual a %dd\n", produto);
	
	system("PAUSE");
	return 0;
}
