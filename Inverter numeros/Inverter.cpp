/*
	Name: InveterNum.cpp
	Author: João Paulo Oliveira
	Date: 10/04/18 09:40
	Description: Programa para inverter numero digitado
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num, cifra;
	
	printf("Digite um número : ");
	scanf("%i",&num);

	if(num>=0){
		do{
			cifra = num % 10;
			printf("%i",cifra);
			num = num / 10;//num /=
			 
		}while(num != 0);
		printf("");
		
	}//fim do if
}//fim do programa
