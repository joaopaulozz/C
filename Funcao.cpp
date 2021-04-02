/*
	Name: Função 
	Author: Joao Paulo Oliveira
	Date: 14/08/18 16:42
	Description: 
*/
#include<stdio.h>

int soma(int,int);

int main()
{
	int a,b;
	
	scanf("%i %i",&a,&b);
	
	printf("SOMA = %i\n",a*b);
	
	return 0;
}

int soma(int x, int y)
{
	return (x + y);	
}
