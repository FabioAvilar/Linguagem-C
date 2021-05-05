#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int var;
	int *point1;
	int **point2;
	
	var = 15;
	
	point1 = &var;
	point2 = &point1;
	
	printf("\n%d\n", **point2);
	
	system("PAUSE");
	return 0;
}
