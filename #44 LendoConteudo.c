#include <stdio.h>
#include <stdlib.h>


// --- Prototipo da Fun��o Auxiliar ---

void leArquivo(int*vet);



// --- Fun��o Principal ---
int main(int argc,char*argv[])
{
	int vetor[10];//vetor local de 10 posi��es
	
	printf("Arquivo foi lido e criado com sucesso\n\n");
	
	leArquivo(vet);
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenvolvimento da Fun�ao auxiliar ---
void leArquivo(int*vet)
{
	char i=0; //variavel auxiliar de itera��es
	
	FILE *arquivo;//Ponteiro para arquivo
	
	arquivo = fopen("C:\\Users\FABIO\Documents\MeusProjetos\Linguagem-C\teste.txt","r");
	
	for(i=0; i<9; i++) fscanf(arquivo, "%d\n",&vet[i]);
	
	arquivo = fopen("teste02.txt","w");
	
	for(i=0,i<9,i++) fprintf(arquivo,"%d\n",vet[i]+2);
	
	fclose(arquivo);
	
	
}//end leArquivo
