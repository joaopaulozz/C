/*
	Name: Vetor
	Author: Joao Paulo Oliveira
	Date: 04/09/18 15:08
	Description: 
*/
#include<stdio.h>
main()
{
	int a=5;
	int b[3] = {2,7,0};
	
	printf("%x\n",&a);// & MOSTRA O ENDEREÇO DE MEMORIA -  X HEXA
	
	for (int i=0;i < 3;i++){
		printf("%x\n",&b[i]);
	}
	return 0;
}
