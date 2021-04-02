/*
	Name: Salario
	Author: Joao Paulo Oliveira
	Date: 21/08/18 10:43
	Description: 
*/
#include<stdio.h>

main()
{
	float hrs;
	int num,meshoras;
	
	scanf("%i %i %f",&num,&meshoras,&hrs);
	hrs = meshoras*hrs;
	
	printf("NUMBER = %i\n",num);	
	printf("SALARY = U$ %.2f\n",hrs);
	
	return 0;
}

