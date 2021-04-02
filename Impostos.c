/*
	Name: Impostos
	Author: Joao Paulo Oliveira
	Date: 19/09/18 11:35
	Description: 
*/
#include <stdio.h>
int main()
{
	double num=0.0;
	
	scanf("%lf",&num);
	
	if(num > 0 && num <= 2000.00)
	{
		printf("Isento\n");
	}
	else if(num >= 2000.01 && num <= 3000.00)
	{
		printf("R$ %.2lf\n",(num-2000.00)*0.08);
	}
	else if(num >= 3000.01 && num <= 4500.00)
	{
		printf("R$ %.2lf\n",(num-3000.00)*0.18+(1000*0.08));
	}
	else 
	{
        printf("R$ %.2lf\n",(num-4500)*0.28 + (1500*0.18) + (1000*0.08));
    }

	return 0;
}

