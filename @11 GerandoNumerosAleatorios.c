#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//função principal
void main(){
	
	
	
	//responsavel por alimentar o rand de forma diferente
	srand((unsigned)time(NULL));
	
	//variavel que recebe o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//variavel que recebe o resto da divisao do numero por 5 (aleatorio entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) +1;
	
	//imprime o valor
	printf("%d\n%d\n", aleatorio,aleatorioSegundo);
	
	
	//pausa o sistema
	system("pause");
}












