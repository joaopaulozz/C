/*
	Name: Media Ponderadas 
	Author: Joao Paulo Oliveira
	Date: 12/09/18 10:34
	Description: 
*/
#include <stdio.h>

int main()

{
	double a,c,b;
	double res=0;
	int nv=0;
	int cont=0;
	
	scanf("%i",&nv);
	
	while(cont<nv)
	{	
		scanf("%lf %lf %lf",&a,&b,&c);
		res=(a*0.2)+(b*0.3)+(c*0.5);
		printf("%.1lf\n",res);
			
	cont++;
	}
	return 0;
}

