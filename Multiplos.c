/*
	Name: Multiplos
	Author: Joao Paulo Oliveira
	Date: 15/09/18 16:50
	Description: 
*/
#include <stdio.h>
int main()
{
	int A,B;
	A=B=0;
	
	scanf("%i %i",&A,&B);
	
	if (A % B == 0 || B % A == 0)//sobra o resto da divisao, representa o inteiro
	{
		printf("Sao Multiplos\n");
	}
		
	else{
		printf("Nao sao Multiplos\n");}
	
	return 0;
}

