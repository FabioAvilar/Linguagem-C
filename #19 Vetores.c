#include<stdio.h>
#include<stdlib.h>

#define dim 5

int main(int argc,char*argv[])
{
	int vetor1[dim] = {4,5,6,9,7};
	int vetor2[] = {15,13,7,5,6,7,8,-1};
	int vetor3[] = {12,13,17,20,24,25,26,30};
	
	unsigned i, tamanho;
	
	printf("\n Vetor com o tamanho pre definido\n");
	
	for(i=0;i<dim;i++)
	{
		printf("Elemento %d = %d\n", i, vetor1[i]);
	}
	printf("\n Vetor terminado em -1\n");
	
	for(i=0;vetor2[i]>0;i++)
	{
		printf("Elemento %d = %d\n",i,vetor2[i]);
	}
	printf("\nImprimir o vetor com tamanho desconhecido\n");
	
	tamanho = sizeof(vetor3) / sizeof(int);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Elemento %d=%d\n",i,vetor3[i]);
	}
	
	
	system("PAUSE");
	return 0;
}
