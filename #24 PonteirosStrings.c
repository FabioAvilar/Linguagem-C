#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	char str[50];
	char*point;
	
	int i;//itera��es
	
	printf("Entre com uma string: ");
	gets(str);
	
	//Encontrar o primeiro espa�o ou o fim da string
	
	for(i=0;str[i] && str[i]!=' ';i++);//encontramos o primeiro espa�o na string
	
	point = &str[i];
	
	printf("\n");
	printf(point);
	printf("\n");
	
	system("PAUSE");
	return 0;
}
