#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



//Fun��o principal do pregrama
void main(){
	
	//Definindo Variaveis
	bool a=true, b=false;
	
	//Se A for verdadeiro
	if(a){
		printf("\n A eh verdadeiro");
	}
	
	//Comparando o B
	if(b){
		printf("\nB eh verdadeiro");
		
	}else{
		printf("\nB eh falso");
	}
	
	//Comparando uma falsidade
	if(!b){
		printf("\nB eh falso\n");
	}
	
	system("pause");
}



