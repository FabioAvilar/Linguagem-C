#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Funções que retornam ponteiros
*/


//Prototipos da Função Auxiliar
char*findCharactere(char caractere, char*str);

int main(int argc,char*argv[])
{
	char frase[80];
	char chr, *pointer;
	
	printf("\n Digite uma frase: ");
	
	gets(frase);
	printf("Digite um caractere: ");
	chr = getche();
	pointer = findCharactere(chr, frase);
	
	if(pointer) printf("\n\n%s\n\n", pointer);//se encontrar correspondencia imprime a frase a partir dela
	
	else printf("\n\nNenhuma paridade\n\n");
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenvolvimento da Função ---

char*findCharactere(char caractere, char*str)
{
	int counter = 0;
	
	while((caractere != str[counter]) && (str[counter] != '\0'))counter++;
	
	if(str[counter]) return(&str[counter]);//se houver correspondencia, retorna o ponteiro para a localizaçao
	
	else return(char*)'\0';//senao, retorna um ponteiro nulo
}//end function
