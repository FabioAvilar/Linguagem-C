#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	
	int i, j;
	
	for(i=0,j=0;i+j <= 100; i++, j++)
	{
		printf("%d\n", i+j);
	}
	
	system("PAUSE");
	return 0;
}
