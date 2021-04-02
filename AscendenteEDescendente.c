/*
	Name: AscendenteEDescendente
	Author: Joao Paulo Oliveira
	Date: 13/09/18 09:41
	Description: 
*/
#include <stdio.h>
int main()
{
	while(1)
	{
	int x,y;
	
	scanf("%i %i",&x,&y);
	
	if(x>y)
	{
		printf("Decrescente\n");
	}
	else if(y>x)
	{
		printf("Crescente\n");
	}
	else 
	{
		break;
	}
	}
	return 0;
}



