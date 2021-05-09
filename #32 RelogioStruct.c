// ---Inclui as bibliotecas auxiliares ---
#include <stdio.h>
#include <stdlib.h>


// -- Estrutura de dados --
struct clock
{
	int horas;
	int minutos;
	int segundos;
	
};

//-- Prototipos das funçoes auxiliares --

void delay();
void update(struct clock *t);
void display(struct clock *t);

//-- Funçao Principal --
int main(int argc,char*argv[])
{
	//Variavel da estrutura
	struct clock time;
	
	//Inicializa os dados da estrutura
	time.horas = 0;
	time.minutos = 0;
	time.segundos = 0;
	
	//Loop infinito
	for( ; ; )
	{
		update(&time);
		display(&time);
	}//end for
	
}//end main


//Desenvolvimento das funçoes auxiliares 
void delay()
{
	long t;
	
	for(t= 1;t<100000000; t++);  //Atraso do nosso codigo
	
}

void update(struct clock *t)
{
	t->segundos++;
	
	if(t->segundos == 60)
	{
		t->segundos = 0;
		t->minutos++;
		
	}
	if(t->minutos == 60)
	{
		t->minutos = 0;
		t->horas++;
	}
	if(t->horas == 24) t->horas = 0;
	
	delay();
}

void display(struct clock*t)
{
	printf("%d:", t->horas);
	printf("%d:", t->minutos);
	printf("%d\n", t->segundos);
}
















