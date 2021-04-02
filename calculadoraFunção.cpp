/*
	Name: funcoescalculadora.cpp
	Author: Joao Paulo Oliveira 
	Date: 23/04/18 14:09
	Description: Escrever um codigo em C que mostre as 5 operacoes basicas de uma calculadora,
	 			implementado por meio de funcoes, a partir de leitura de 2 numeros.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

float dividir(int,int);
int somar(int,int);
int menos(int,int);
int multi(int,int);
int pot(int,int);
main()
{
	int a,b,soma,menor,mul,poten;

	float divi=0.0;
	puts("Programa para mostrar 5 operacoes da calculadora: \n");
	printf("\n A :"); scanf("%i", &a);
	printf(" \n B :"); scanf("%i", &b);
	
	soma = somar(a,b);
	printf(" \n SOMA: %i \n ",soma);
	
	menor = menos(a,b);
	printf(" \n Menos: %i \n",menor);
	
	divi = dividir(a,b);
	printf("\n Divisao: %.2f \n",divi);

	mul = multi(a,b);
	printf("\n Multiplicacao: %i \n",mul);
	
	poten = pot(a,b);
	printf("\n Potencia: %i \n",poten);
	
}//fim do programa
int pot(int s,int v)
{
	return pow(s,v);
}
int multi(int q,int r)
{
	return q * r;
}
int somar(int x , int y)
{
	return x + y ;
}
int menos(int e,int f)
{
	return e - f ;
}
float dividir(int w, int z)
{
	return (float)w/z;//casting para pegar valor real
}


