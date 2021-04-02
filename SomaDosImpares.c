/*
	Name: SomaDosImpares
	Author: 
	Date: 17/09/18 10:53
	Description: 
*/
#include <stdio.h>
int main()
{
	int a,b;
	int i=0;
	int sa,sb;
	a=b=sa=sb=0;
	
	scanf("%d %d",&a,&b);
	
	if(a<0)
		a = a * -1;
	if(b<0)
		b = b * -1;
	
	for(i=0 ; i<a ; i++)
	{
		if(i % 2 != 0)
			{
				sa=sa+i;
			}
	}
	for(i=0 ; i<b ; i++)
	{
		if(i % 2 != 0)
			{
				sb=sb+i;
			}
	}
	printf("%d\n",(sa-sb));
	
	return 0;
	
}

