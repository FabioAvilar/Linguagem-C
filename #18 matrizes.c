#include <stdio.h>
#include <stdlib.h>

#define DIML 5
#define DIMC 30

int main(int argc, char*argv[])
{
	int i,j;
	int nomes[DIML][DIMC];
	
	for(i=0;i<DIML;i++)
	{
		printf("Entre com a linha %d  ",i);
		scanf("%s", nomes[i]);
	}
	
	for(i=0;i<DIML;i++)
	{
		
		printf("\nO nome %d eh ",i);
		printf(nomes[i]);
		
	}//end for
		
	system("PAUSE");
	return 0;
}
