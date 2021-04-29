#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	
	char nome[51], sobrenome[51];
	
	int comp1, comp2;
	
	printf("Digite seu nome ");
	scanf("%s",&nome);
	comp1 = strlen(nome);
	getchar();
	
	printf("Digite seu sobrenome ");
	scanf("%s", &sobrenome);
	comp2 = strlen(sobrenome);
	getchar();
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
	
	printf("Ola %s!\n", nome);
	
	printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres\n", comp1, comp2);
	
	printf("\n");
	printf(strlwr(nome));
	
	printf("\n");
	
	printf(strcpy(nome,"outro nome"));
	printf(nome);
	printf("\n");
	
	system("PAUSE");
	return 0;
}
