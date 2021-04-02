/*
	Name: Exemplo
	Author: João Paulo Oliveira
	Date: 23/03/18 10:43
	Description: vetores 
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int vetor[10],i,soma;
	i=soma=0;
	float media=0.0;
	
	while(i<10)
	{
	scanf("%f",&vetor[i]);
	soma=soma+vetor[i];
	i++;
    }
               
    media=soma/i;    
	printf("A media e : %i",media);      
            
}
