#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char*argv[])
{
	
	char mat[30], *point;
	
	printf("Entre com uma frase maiuscula: \n");
	scanf("%s", &mat);
	getchar();
	
	printf("Frase em letra maiuscula: ");
	
	point = mat;
	
	while(*point) printf("%c",tolower(*point++));
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
