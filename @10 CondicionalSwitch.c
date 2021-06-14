#include <stdio.h>
#include <stdlib.h>



//funçao principal
void main(){
	int a = 3;
	char b='x';
	
	switch(a){
		case 1:
			printf("\n opcao escolhida 1\n");
			break;
		case 2:
			printf("\n opcao escolhida 2\n");
			break;
		case 3:
			printf("\n opcao escolhida 3\n");
			break;
		default:
			printf("\n opcao invalida\n");
			break;
			
	}
	
	switch(b){
		case'x':
			printf("\n A letra eh x\n");
			break;
		default:
			printf("\n opcao invalida \n");
			break;
	}
	
	//pausa o sistema
	system("pause");
}
