/*
	Name: Salario Com Bonus
	Author: Joao Paulo Oliveira
	Date: 13/08/18 10:42
	Description: 
*/
#include<stdio.h>
main()
{	
	char nome[15];
	float sal,ven;
	float adendo=15;
	
	scanf("%s",&nome);
	scanf("%f",&sal);
	scanf("%f",&ven);	
	
	adendo = (ven*adendo)/100;
	
	printf("TOTAL = R$ %.2f\n",sal+adendo);
	
	return 0;
}

