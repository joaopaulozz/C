/*
	Name: TabelaMultiplicacao
	Author: Joao Paulo Oliveira 
	Date: 13/09/18 09:34
	Description: 
*/
#include <stdio.h>
int main()
{
	int num=0;
	int i=1;
	int n=1;
	
	scanf("%i",&num);
	
	while(i<=10)
	{
		printf("%i x %i = %i\n",n,num,i*num);
		n++;
		i++;
	}
	return 0;
}

