#include <stdio.h>
#include <stdlib.h>

// --- Prototipos das Funçoes Auxiliares ---
void exemplo1(int mat1[10]);
void exemplo2(int mat2[]);
void exemplo3(int *point);

// --- Função Principal ---
int main(int argc,char*argv[])
{
	int t[10],i;
	
	for(i=0;i<10;i++) t[i] = i;
	
	exemplo1(t);
	printf("\n");
	
	exemplo2(t);
	printf("\n");
	
	exemplo3(t);
	
	printf("\n");
		
	system("PAUSE");
	return 0;
}//end main


// --- Desenvolvimento das Funçoes Auxiliares ---
void exemplo1(int mat1[10])
{
	int i;
	
	for(i=0; i<10;i++) printf("%d", mat1[i]);
}//end exemplo1

void exemplo2(int mat2[])
{
	int i;
	
	for(i=0;i<10;i++) printf("%d", mat2[i]);
}//end exemplo2

void exemplo3(int *point)
{
	int i;
	
	for(i=0;i<10;i++) printf("%d", point[i]);
}//end exemplo3













