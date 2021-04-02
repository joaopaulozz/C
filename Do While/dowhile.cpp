/*
	Name: RepeticaoDoWhile.cpp
	Author: Joao Paulo Oliveira
	Date: 07/03/18 15:45
	Description: Programa para demonstrar a utilização da estrutura de repetição Do...While
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num, soma, cont;
	float media;
	num = cont = soma = 0; media=0.0;
	
	puts("Digite 7 números inteiros : ");
		
		do
		{
			scanf("%i", &num);
			soma = soma + num;
			cont = cont + 1;
		
		}while(cont < 7);// pq acaba aqui a instrução
		
		media = (float)soma/7;//casting para real
		
		printf("A média é : %.2f", media);
	
	
}//fim do main


