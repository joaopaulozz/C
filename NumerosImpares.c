/*
	Name: Numeros Impares
	Author: Joao Paulo Oliveira
	Date: 04/09/18 21:52
	Description: 
*/
#include<stdio.h>
main()
{
	int num=1;
	int x;
	
	scanf("%i",&x);
	
	while(num <= x)
	{
		if (num % 2 == 1)
		{	
		printf("%i\n",num);
		}
	num++;	
	}
	return 0;
}
