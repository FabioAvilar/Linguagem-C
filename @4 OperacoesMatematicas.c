#include <stdio.h>
#include <stdlib.h>



//Funçao principal do programa
void main(){
	
	//Definindo variaveis
	int a = 6, b = 3;
	
	//soma
	printf("A soma de a e b %d e %d = %d\n",a,b, a+b);
	//subtração
	printf("A subtracao de a e b %d e %d = %d\n",a,b, a-b);
	//divisão
	printf("A divisao de a e b %d e %d = %d\n",a,b, a/b);
	//multiplicação		
	printf("A multiplicacao de a e b %d e %d = %d\n",a,b, a*b);
	//resto da divisao
	printf("O resto da divisao de a e b %d e %d = %d\n",a,b, a+b);
	//valor absoluto
	printf("O valor absoluto de a e b %d e %d = %d\n",a,b, a+b);
	//pausa o programa apos a execuçaõ
	system("pause");
}
