/*
	Name: AteSquarePares
	Author: Joao Paulo Oliveira
	Date: 15/09/18 10:57
	Description: 
*/
#include<stdio.h>
int main()
{
	int cont=1;
	int n=0;
	
	scanf("%i",&n);
	
	while(cont<=n)
	{
		if(cont % 2 == 0)
			printf("%i^2 = %i\n",cont,cont*cont);
	cont++;
	}
	return 0;
}

