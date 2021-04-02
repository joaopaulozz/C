/*
	Name: ExMat1.cpp
	Author: João Paulo Oliveira 
	Date: 18/06/18 14:04
	Description: 
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int vetor[10],soma;
	int i = 0;
	puts("Digite os 10 numeros: \n");
	
	while(i < 10)//laço de repetição Enquanto...Faça (WHILE)
	{
		scanf("%d",&vetor[i]);
		soma=soma+vetor[i];
		i++;
		
	}//fim do while

	puts("Vetor carregado!");
	printf("%i",soma);

}

