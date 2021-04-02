/*
	Name: OMelhor
	Author: Joao Paulo Oliveira
	Date: 20/08/18 11:08
	Description: 
*/

#include<stdio.h>
#include<stdlib.h>

int main() 
{ 
	int a, b, c, maior; 
	
	scanf("%i %i %i", &a, &b, &c); 
	
	maior = ( a + b + abs(a - b)) / 2; 
	
	maior = (c + maior + abs(maior - c)) / 2; 
	
	printf("%i eh o maior\n", maior); 
	
	return 0; 
}
