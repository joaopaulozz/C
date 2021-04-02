/*
	Name: Area
	Author: Joao Paulo Oliveira
	Date: 20/08/18 17:19
	Description: 
*/
#include<stdio.h>
#include<math.h>
main()
{
	double A=0.0;
	double B=0.0;
	double C=0.0;
	float pi=3.14159;
	
	scanf("%lf %lf %lf",&A ,&B, &C);
	
	printf("TRIANGULO: %.3lf\n",(A*C)/2);
	
	printf("CIRCULO: %.3lf\n",(C*C)*pi);
	
	printf("TRAPEZIO: %.3lf\n",((A+B)*C)/2);
	
	printf("QUADRADO: %.3lf\n",B*B);
	
	printf("RETANGULO: %.3lf\n",A*B);
	
	return 0;
}


