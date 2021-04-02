/*
	Name: AumentoDeSalario
	Author: Joao Paulo Oliveira
	Date: 18/09/18 10:07
	Description: 
*/
#include <stdio.h>
int main()
{
	double num=0.0;
	
	scanf("%lf",&num);
	
	if(num <= 400.00)
	{
		printf("Novo salario: %.2lf\n",num+(num*0.15));
		printf("Reajuste ganho: %.2lf\n",num*0.15);
		printf("Em percentual: 15 %%\n");
	}
	else if(num >= 400.01 && num <= 800.00)
	{
		printf("Novo salario: %.2lf\n",num+(num*0.12));
		printf("Reajuste ganho: %.2lf\n",num*0.12);
		printf("Em percentual: 12 %%\n");
	}
	else if(num >= 800.01 && num <= 1200.00)
	{
		printf("Novo salario: %.2lf\n",num+(num*0.10));
		printf("Reajuste ganho: %.2lf\n",num*0.10);
		printf("Em percentual: 10 %%\n");
	}
	else if(num >= 1200.01 && num <= 2000.00)
	{
		printf("Novo salario: %.2lf\n",num+(num*0.07));
		printf("Reajuste ganho: %.2lf\n",num*0.07);
		printf("Em percentual: 7 %%\n");
	}
	else
	{
		printf("Novo salario: %.2lf\n",num+(num*0.04));
		printf("Reajuste ganho: %.2lf\n",num*0.04);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}

