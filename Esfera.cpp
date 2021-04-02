/*
	Name: Esfera
	Author: Joao Paulo Oliveira
	Date: 17/08/18 11:31
	Description: 
*/
#include<stdio.h>
#include<math.h>
main()
{
	double pi = 3.14159;
	double r3 = 0.0;
	double vol = 0.0;
	
	scanf("%lf",&r3);
	
	r3 = pow(r3,3);
	vol = (4/3.0) * pi * r3;
	
	printf("VOLUME = %.3lf\n",vol);
	
	return 0;
}

