#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	
	int mat[10] = {1,8,3,7,5,3,7,23,68,10};
	int *point, i;
	
	point = mat;
	
	for(i=0;i<10;i++) printf("%d\n",*(point+i));
	
	
	system("PAUSE");
	return 0;
}
