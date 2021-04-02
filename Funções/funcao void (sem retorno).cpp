
/*
	Name: Funcoes.cpp 
	Author: João Paulo Oliveira 
	Date: 18/04/18 15:41
	Description: Programa para demonstrar a utilizaçao de funçao COM e SEM retorno. 
*/

#include<stdio.h>
#include<conio.h>
void linha();//Prototipacao (int,int);
int somar(int,int);
int c=30 ;//antes do main variavel global
//scopo estar dentro das chaves
float dividir(int , int );

main()
{
	int  a, b, soma;
	a = b = soma =0;
	float divi =0.0 ;
	
	linha();// invoke - invocação 
	puts("\n Programa para somar dois numero :");
	linha();
	
	printf("\n A :"); scanf("%i", &a);
	linha();
	printf(" \n B :"); scanf("%i", &b);
	linha();
	
	soma = somar(a,b);//invoke
	
	printf(" \n SOMA : %i \n ",soma);
	linha();
	
	divi = dividir(a, b);
	printf("\n Divisao %.2f",divi);
	linha();
}//fim do programa
void linha()
{
	for(int i=0; i<c ;i++)
	printf("_");
}

int somar(int x , int y)
{
	return x + y + c;
}

float dividir(int w, int z)
{
	return (float)w/z;//casting para pegar valor real
}


