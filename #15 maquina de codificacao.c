#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	
	int x;
	
	for(x=0; x<=100; x++)
	{
		if(x % 5) continue;
		
		
		printf("%d\n", x);
		
	}
	
	system("PAUSE");
	return 0;
}
