/*
	Sistema de Busca de Componentes em Linguagem C ANSI
	
	do Curso WRKits

*/


//Bibliotecas Auxiliares
#include <stdio.h>
#include <stdlib.h>

//------Prototipo das Funções Auxiliares---
int check(char *s);
void take_component();

//---Variaveis Globais---
char databank[][40] = {//Matriz contendo os componentes e respectivas caracteristicas
						"BC547"      ,"TBJ NPN 625mW",
						"BC557"      ,"TBJ PNP 625mW",
						"TIP41"      ,"TBJ NPN 65W",
						"TIP42"      ,"TBJ PNP 65W",
						"TIP122"     ,"TBJ NPN Darlington 100V 5A",
						"TIP127"     ,"TBJ PNP Darlington 100V 5A",
						"2N2222"     ,"TBJ NPN High Frequency 500mW",
						"2N7000"     ,"Mosfet N channel",
						"IRF3205"    ,"Mosfet N channel 55V 98A",

						};
						
char input[80]; 			//Matriz para entrada de dados(componente em pesquisa)
char component[80];			//Matriz passada como parâmetro para função check
char *point;				//Ponteiro


// --- Função Principal ---		
int main()
{
		int indice;								//Armazena o índice do componente
		char option;							//Armazena a opção escolhida
	
	do											//Loop
	{
		printf("Informe o componente que deseja pesquisar: ");//solicita que o usuario pesquise um componente
		gets(input);										  //lê o componente digitado pelo usuario	
		point = input;										  //atribui a point o endereço da matriz input	
		printf("Caracteristicas do componente pesquisado: ");
		take_component();									  //pega o primeiro componente	
		
		//Loop pra ler um componente por vez da matriz input e exibe suas características.
		do
		{
			//procura o índice do componente em databank
			indice = check(component);
			
			//imprime a palavra em português se foi traduzida
			if(indice != -1) printf("%s", databank[indice+1]);
			else printf("Sem registros no banco de dados /n");
			
			
			take_component();									//Pega proxima palavra
			
		}while(*component);										//repete até encontrar um string nula
		
		printf("\n");											//Quebra de linha
		
		printf("Pesquisar mais? S - sim | N - nao \n"); 		//Pergunta se o usuario quer pesquisar mais
		scanf("%c", &option);									//Armazena a opção escolhida em option
		getchar();												//Limpa o buffer do teclado
		
	}while(option == 's' || option == 'S');
	
	system("PAUSE")	;
	return 0;
}//end main



// --- Desenvolvimento das Funções Auxiliares
int check(char *s)							//Repita a localização de uma correspondência entre a string
{
	int i;									//Variavel de iterações
	
	for(i=0; *databank[i];i++)				//Varre a matriz databank
	{
		if(!strcmp(databank[i],s)) break; 	//Comparação das matrizes databank e s
		
	}//end for
	
	if(*databank[i]) return(i); 			//Retorna o índice corresponde, se uma correspondencia existir
	else return(-1);						//Retorna -1 se nao houver uma correspondencia
}//end check

/*
	take_component le o proximo componente da matriz input. Cada componente é considerado
	como sendo separado por um espaço ou pelo terminador nulo.
	Nenhuma outra pontuação é permitida.
	O componente retornado será uma stringde tamanha nulo quando o final da string input
	é encontrado.
*/
void take_component()
{
	char *q; //ponteiro auxiliar
	
	//Recarrega o endereço do componente toda vez que a função é chamada.
	q = component;
	
	//pega o proximo componente
	while(*point && *point!=' ') 	//Shift no endereço dos índices da matriz databank
	{
		*q = *point;
		point++;
		q++;
	}//end while
	
	if(*point == ' ') point++;
	*q = '\0';			//terminador nulo
	
}//end take_component























						
						
						
