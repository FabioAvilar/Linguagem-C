#include <stdio.h>
#include <stdlib.h>

// --- Prototipo das Funçoes Auxiliares ---
void arquivo_crescente(int*vet);


// --- Função Principal ---
int main(int argc,char*argv[])
{
	int vet[11];
	
	arquivo_crescente(&vet[0]);
	
	printf("Vetor foi organizado com sucesso!\n\n");
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenvolvimento das Funçoes Auxiliares ---
void arquivo_crescente(int *vet)
{
	int i,j, acc;
	
	FILE *lerascii;
	
	lerascii = fopen("arquivo.txt","r");
	
	for(i=0;i<10;i++)
	{
		fscanf(lerascii,"%d\n", &vet[i]);
	}
	
	lerascii = fopen("ordem_crescente.txt","w");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)	
		{
			if(vet[i]>vet[j])
			{
				acc = vet[i];
				vet[i] = vet[j];
				vet[j] = acc;
			}//end if
		}//end for j
		fprintf(lerascii, "%d\n", vet[i]);
	}//end for
	
	fclose(lerascii);
}//end arquivo_crescente









