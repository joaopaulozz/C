/*
	Name: Coordenadas de um ponto
	Author: Joao Paulo Oliveira
	Date: 17/09/18 10:21
	Description: 
*/
#include <stdio.h>
int main()
{
	double X,Y;
	
	scanf("%lf %lf",&X,&Y);
	
	if (X == 0 && Y == 0)
		printf("Origem\n");
		
	else if (X == 0)
		printf("Eixo X\n");
		
	else if (Y == 0)
		printf("Eixo Y\n");

	else if (X>0 && Y>0)
		printf("Q1\n");
		
	else if (X<0 && Y>0)
		printf("Q2\n");
		
	else if (X<0 && Y<0)
		printf("Q3\n");
		
	else if (X>0 && Y<0)
		printf("Q4\n");
	
	return 0;
}

