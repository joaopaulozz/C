/*
	Name: MaiorPosicao
	Author: Joao Paulo Oliveira
	Date: 19/09/18 10:10
	Description: 
*/
#include <stdio.h>
int main()
{
	int maior=0;
	int i=0;
	int vet[5];
	int mi=0;
	
	for(i=0;i<5;i++){
	scanf("%i",&vet[i]);}
	
	i=0;
	while(i<5)
	{
		if(vet[i] > maior)
			{
				maior=vet[i];
				mi=i+1;	
			}
	i++;
	}
	printf("%i\n",maior);
	printf("%i\n",mi);
	
	return 0;
}

