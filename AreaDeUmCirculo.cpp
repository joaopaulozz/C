/*
	Name: AreaDeUmCirculo
	Author: Joao Paulo Oliveira
	Date: 17/08/18 10:35
	Description: 
*/
#include<stdio.h>
main()
{
	double n = 3.14159;
	double r = 0.0;
	double A = 0.0;
	
	scanf("%lf",&r);
	
	A = n*(r*r);
	
	printf("A=%.4lf\n",A);
	
	return 0;
}

