/*
	Name: ExemploVetor
	Author: Joao Paulo Oliveira
	Date: 10/09/18 10:24
	Description: 
*/
#include <stdio.h>
int main()
{
	int vet[6]={0};
	int i=0;
	
	for(i=0;i<6;i++)
	{
		scanf("%i",&vet[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%i = %i\n",i,vet[i]);
	}

return 0;
}

