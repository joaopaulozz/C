/*
	Name: Positivos e Media
	Author: Joao Paulo Oliveira
	Date: 10/09/18 09:55
	Description: 
*/
#include <stdio.h>
int main()
{
	double vet[6]={0};
	int i=0;
	double soma=0;
	int contP=0;//Soma quantos valores positivos existem
	double media=0.0;

	for(i=0;i<6;i++)//Entradas de valores no vetor
	{
		scanf("%lf",&vet[i]);
	}
	for(i=0;i<6;i++)//Quantos valores são positivos 
	{
		if(vet[i] >= 0)
		{
			contP++;
		}
	}
	
	for(i=0;i<6;i++)//Media dos valores positivos
	{
		if(vet[i] >= 0)
		{
			soma = soma + vet[i];
		}
	}
	media = soma / contP;
	printf("%i valores positivos\n",contP);//Exibe quantos valores posivitos existem
	printf("%.1lf\n",media);//Media dos valores positivos
	
	return 0;
}

