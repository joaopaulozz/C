/*
	Name: NumerosPositivos
	Author: Joao Paulo Oliveira
	Date: 18/09/18 10:27
	Description: 
*/
#include <stdio.h>
int main()
{
	int vet[6];
	int i=0;
	int p=0;
	
	while(i<6)
	{
		scanf("%i",&vet[i]);
		i++;
	}
	i=0;
	while(i<6){
		if(vet[i] > 0)
		{
			p++;
		}
		i++;}
	printf("%i valores positivos\n",p);
	return 0;	
}
