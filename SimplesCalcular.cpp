/*
	Name: SimplesCalcular
	Author: Joao Paulo Oliveira
	Date: 20/08/18 11:08
	Description: 
*/
#include<stdio.h>
main()
{
	float preco,preco2;
	int nprod,nprod2;
	int qprod,qprod2;
	float res = 0.0;
	
	scanf("%i %i %f",&nprod,&qprod,&preco);
	scanf("%i %i %f",&nprod2,&qprod2,&preco2);
	
	res = (qprod * preco) + (qprod2 * preco2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",res);
	
	return 0;

}
