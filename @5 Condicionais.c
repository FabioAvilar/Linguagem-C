#include <stdio.h>
#include <stdlib.h>




//Funçao Principal
void main()
{
	//Definindo Variavel
	int a = 4, opcao = 2;;
	float b = 2.5;
	char c = 'x';
	
	//Condicional simples
	if(a==5){
		printf("A variavel a = 5\n");
	}
	if(b == 2.5){
		printf("\n A variavel b = 2.5\n");
	}
	if(c == 'x'){
		printf("\n A variavel c = letra x\n");
	}
	
	
	//Numero par ou impar
	if(a % 2 == 1){
		printf("\n A variavel eh impar\n");
	}else{
		printf("\n A variavel eh par\n");
	}
	
	//Condicional composta
	if(opcao ==1){
		printf("\n A opcao = 1\n");
	}else if(opcao == 2){
		printf("\nA opcao = 2\n");
	}else{
		printf("\nA opcao nao eh igual 1 e nem 2 \n");
	}
	
	//pausa o sistema 
	system("pause");
}
