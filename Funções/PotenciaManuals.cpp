#include <stdio.h>

int main()
{
	int i,pot,base,exp;

	scanf("%i %i",&base,&exp);
	
	for(i=0;i<exp;i++)
	{
		base = base * exp;
	}
	printf("%i",base);
	return 0;					
}
