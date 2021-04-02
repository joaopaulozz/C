/*
	Name: RepeticaoFor.cpp
	Author: Joao Paulo Oliveira 
	Date: 07/03/18 16:40
	Description: Programa para demonstrar a utilização da estrutura de repetição FOR
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num, soma, cont;
	float media;
	num = soma = 0; media=0.0;
	
	puts("Digite 7 números inteiros : ");
	
	for(cont = 0;cont < 7;cont = cont + 1)
	{
		scanf("%i",&num);
		soma = soma+num;
	}
	
		media = (float)soma/7;//casting para real
		
		printf("A média é : %.2f", media);
	
}//fim do main

