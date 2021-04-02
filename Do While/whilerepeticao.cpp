/*
	Name: RepeticaoWhile.cpp 
	Author: Alexandre Cassiano
	Date: 07/03/18 16:23
	Description: Programa para demonstrar o laço while
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
	
	while(cont < 7)
	{
			scanf("%i", &num);
			soma = soma + num;
			cont = cont + 1;
		
	}
		
		media=(float)soma/7;//casting
		
		printf("A média dos números digitados é : %.2f",media);
		
		
}//fim do main
