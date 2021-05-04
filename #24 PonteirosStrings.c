#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	char str[50];
	char*point;
	
	int i;//iterações
	
	printf("Entre com uma string: ");
	gets(str);
	
	//Encontrar o primeiro espaço ou o fim da string
	
	for(i=0;str[i] && str[i]!=' ';i++);//encontramos o primeiro espaço na string
	
	point = &str[i];
	
	printf("\n");
	printf(point);
	printf("\n");
	
	system("PAUSE");
	return 0;
}
