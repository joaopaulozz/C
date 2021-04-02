/*
	Name: ImparPar
	Author: Joao Paulo Oliveira
	Date: 17/09/18 17:36
	Description: 
*/
#include <stdio.h>
int main()
{
	int vet[5];
	int i=0;
	int np=0; int par=0; int imp=0;
	int nn=0;
	
	for(i=0 ; i<5 ;i++)
	{
		scanf("%i",&vet[i]);
	}
	
	for(i=0 ; i<5 ;i++)
	{	
		if(vet[i] < 0)
			{
				nn++;
			}
		if(vet[i] > 0)
			{
				np++;
			}
		if(vet[i] % 2 == 0)
			{
				par++;
			}
		if(vet[i] % 2 != 0)
			{
				imp++;
			}
	}
	printf("%i valor(es) par(es)\n",par);
	printf("%i valor(es) impar(es)\n",imp);
	printf("%i valor(es) positivo(s)\n",np);
	printf("%i valor(es) negativo(s)\n",nn);
	
	return 0;
}

