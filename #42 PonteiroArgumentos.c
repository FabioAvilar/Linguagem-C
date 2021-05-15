#include <stdio.h>
#include <stdlib.h>

// --- Protótipos das Funções Auxiliares ---
void change(int *x,int *y);

// --- Função Principal ---
int main(int argc,char*argv[])
{
	int num1,num2;
	
	printf("Digitar um numero: ");
	scanf("%d", &num1);
	getchar();
	printf("Digitar outro numero: ");
	scanf("%d",&num2);
	getchar();
	
	printf("Os valores iniciais num1= %d e num2= %d\n\n", num1,num2);
	
	change(&num1,&num2);
	printf("Os valores modificados num1= %d e num2= %d\n\n", num1,num2);
	
	
	system("PAUSE");
	return 0;
}//End Main

// --- Desenvolvimento das Funções Auxiliares ---
void change(int *x,int *y)
{
	int temp;
	
	temp = *x;//salvando o conteudo armazenado no endereço apontado por x
	*x=*y;//armazena o conteudo de y em x;
	*y=temp;//armazena o conteudo original de y
		
}//end













 
