/*
	Name: ParOuImpar
	Author: Joao Paulo Oliveira
	Date: 27/08/18 17:51
	Description: 
*/
#include<stdio.h>

main()
{
	int ent=0;
	int num=0;
	
	scanf("%d",&ent);
	
	for(int cont=0 ; cont < ent ;cont++)
	{
		scanf("%d",&num);
	}
	
	if (num < 0)
		printf("Negativo");
		
	else if (num > 0)
		printf("Positivo");
		
	return 0;
}
