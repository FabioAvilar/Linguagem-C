#include <stdio.h>
#include <stdlib.h>




//Fun��o principal
void main(){
	//Definindo Variaveis
	int a = 20;
	
	//Conectivo Logico e (AND), Se uma compara��o for falsa, nao entra no bloco
	if(a > 5 && a < 15){
		printf("\nA variavel 'a' esta entre 5 e 15\n");
	}else{
		printf("\n Essa varivavel nao serve\n");
	}
	//Conectivo Logico OU (OR), Se uma compara��o for Verdadeira, ja entra no bloco
	if(a>5 || a>15){
		printf("\nA variavel 'a' eh maior que 5 ou 15\n");
	}else{
		printf("\n a variavel eh menor que 5 ou 15\n");
	}
	//Misturando Conectivos
	if((a>5 && a>15) || a == 20){
		printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20");
	}
	//pausa o sistema
	system("pause");
}
