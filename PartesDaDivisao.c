/*
	Name: PartesDaDivisao
	Author: Joao Paulo Oliveira
	Date: 13/09/18 09:26
	Description: 
*/
#include <stdio.h>
int main()
{
	int n1,n2;
	
	scanf("%i %i",&n1,&n2);
	
	printf("DIVIDENDO = %i\n",n1);
	printf("DIVISOR = %i\n",n2);
	printf("QUOCIENTE = %i\n",(int)n1/n2);
	printf("RESTO = %i\n",(n1%n2));
	
	return 0;
}
