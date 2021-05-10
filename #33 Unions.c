#include <stdio.h>
#include <stdlib.h>


//comparando o espaço armazenado da union e struct 

union estrutura01
{
	
	int inteiro;
	
	char caractere;
	
	float decimal;
	
};

struct estrutura02
{
	
	int inteiro02;
	
	char caractere02;
	
	float decimal02;
	
};

int main(int argc,char*argv[])
{
	
	printf("Uniao: %d\n",sizeof(union estrutura01));
	
	printf("Estrutura: %d\n", sizeof(struct estrutura02));
	
	
	
	system("PAUSE");
	return 0;
}























