/*
	Name: FuncaoInverter.cpp
	Author: Joao Paulo Oliveira
	Date: 23/04/18 14:59
	Description: Inverter o valor de um para o outro
*/
#include<stdio.h>
#include<conio.h>
void trocar(int*,int*);
main()
{
	int a,b;
	
	printf("A :"); scanf("%d",a);
	
	printf("B :"); scanf("%d",b);
	
	trocar(&a,&b);
	
	printf("\n A : %i",a);
	printf("\n B : %i",b);
	
}//fim do programa 
void trocar (int *a , int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

