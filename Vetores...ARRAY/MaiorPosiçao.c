/*
	Name: Maior Posição
	Author: Joao Paulo Oliveira
	Date: 08/09/18 12:05
	Description: 
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int cont;
	int vet[5];
	
	for(cont=0;cont<5;cont++)
	{
		printf("Entre com um numero:");
		scanf("%i",&vet[cont]);
	}
	for(cont=0;cont<5;cont++){
		printf("O numero %i = %i\n",cont,vet[cont]);
	}
	
	system("pause");
}

