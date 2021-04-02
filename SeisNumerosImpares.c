/*
	Name: Seis Numeros Impares
	Author: Joao Paulo Oliveira
	Date: 27/08/18 10:36
	Description: 
*/
#include<stdio.h>
main()
{
	int num=0;
	int cont=0;
	
	scanf("%i",&num);
	
	while(cont < 6)
	{
		if(num % 2 == 1){
		num = num + 2;
		printf("%i\n",num);}
		
		else if(num % 2 == 0){
		num = num + 1;	
		printf("%i\n",num);}
	cont++;
	}
	
	return 0;
}

