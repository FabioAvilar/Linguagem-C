#include <stdio.h>
#include <stdlib.h>

/*Esse program nao deve ser executado*/

int main(int argc, char*argv[])
{
	int var2;
	int *pointer;
	
	var2 = 88;
	
	pointer = var2;
		
	printf("\n%d\n", *pointer);
	
	system("PAUSE");
	return 0;
}
