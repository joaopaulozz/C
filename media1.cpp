/*
	Name: Media1
	Author: Joao Paulo Oliveira
	Date: 16/08/18 11:09
	Description: 
*/
#include<stdio.h>
main()
{
	float A=0.0,B=0.0,MEDIA=0.0;
	
	scanf("%f %f",&A,&B);
	
	MEDIA = (A*3.5)+(B*7.5);
	
	printf("MEDIA = %.5f\n",MEDIA/11.0);
	
	return 0;
}
