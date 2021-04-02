/*
	Name: CombustivelGasto
	Author: Joao Paulo Oliveira
	Date: 22/08/18 09:34
	Description: 
*/
#include<stdio.h>
main()
{
	int tempogasto = 0;
	int velmedia = 0;
	float com = 12.0;
	float res = 0.0;
	
	scanf("%i %i",&tempogasto,&velmedia);
	
	res = (tempogasto*velmedia)/com;
	
	printf("%.3f\n",res);
	
	return 0;
}

