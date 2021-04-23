#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char*argv[])
{
	
	int i=0,j=1, resposta;
	int erros=0, acertos=0;
	char opcao;
	
	inicio: 
		for(j=1;j<10;j++)
		{
			
			printf("Qual a resposta %d + %d?", i,j);
			scanf("%d", &resposta);
			getchar();
			
			if(resposta != (i+j))
			{
				erros++;
				printf("Resposta errada!\n");
			}
			else
			{
				acertos++;
				printf("Resposta correta!\n");
			}
			
		}//end for
		printf("Acertos = %d\n", acertos);
		printf("Erros = %d\n", erros);
	meio:
		printf("Continuar respondendo? s - sim, n -nao: ");
		opcao = toupper(getche());
		getchar();
		
		printf("\n");
		switch(opcao)
		{
			case 'S':
				i++;
				goto inicio;
				break;
			case'N':
				goto fim;
				break;
			default:
				printf("Opcao invalida\n");
				goto meio;
		}//end switch
	
	fim:
		
	system("PAUSE");
	return 0;
}
