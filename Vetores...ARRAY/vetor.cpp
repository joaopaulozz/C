/*
	Name: Vetor.cpp
	Author: Jo�o Paulo Oliveira 
	Date: 26/03/18 14:10
	Description: Programa para utilizar a estrutura de dados tipo vetor
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int vetor[10],i,soma;
	float media;
	//i=soma=0;
	media=0.0;
	
	puts("Digite os 10 n�meros: \n");
	
	//la�o de repeti��o Enquanto...Fa�a (WHILE)
	while(i < 10)
	{
		scanf("%i",&vetor[i]);
		soma=soma+vetor[i];
		i++;
		
	}//fim do while
	puts("Vetor carregado!");
	media = (float)soma/i;//casting
	printf("A media dos numeros digitalizados �: %.2f \n",media);
	
	puts("-----------------");
	
	puts("Vetor em ordem orignal:");
	
	//La�o de repeti��o (Do...While)
	i=0;
	do
	{
		printf(i < 9 ? "%i, ":"%i",vetor[i]);//vai tirar a ultima virgula
		i++;
	}while(i<10);

	puts("\nVetor em ordem inversa: ");
	
	//La�o de repeti��o Para...Fa�a(FOR)
	for(i-- ;i > -1;i--)//i=i-1
		printf(i > 0 ? "%i, ":"%i",vetor[i]);
			
	
}//fim do programa
