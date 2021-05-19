#include <stdio.h>
#include <stdlib.h>





int main(int argc,char*argv[])
{
	FILE *arquivo;					//cria um ponteiro para um arquivo
	
	arquivo=fopen("teste.txt","w"); //abre um arquivo
	
	fprintf(arquivo,"\nHello World\n");//escreve mensagem para um arq do tipo txt
	
	fclose(arquivo);                //fecha o arq
	
	system("PAUSE");
	return 0;
}















