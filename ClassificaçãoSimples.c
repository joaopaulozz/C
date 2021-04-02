/*
	Name: Classificação Simples
	Author: Joao Paulo Oliveira
	Date: 28/08/18 09:46
	Description: Leia três inteiros e ordene-os em ordem crescente.
	Depois, imprima esses valores em ordem crescente, uma linha em branco e os valores na sequência que foram lidos.
*/
#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	scanf("%i %i %i",&n1,&n2,&n3);
	
	if (n1 > n2 && n2 > n3){
		printf("%i\n%i\n%i\n",n3,n2,n1);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	if (n1 > n3 && n3 > n2){
		printf("%i\n%i\n%i\n",n2,n3,n1);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	if (n2 > n1 && n1 > n3){
		printf("%i\n%i\n%i\n",n3,n1,n2);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	if (n2 > n3 && n3 > n1){
		printf("%i\n%i\n%i\n",n1,n3,n2);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	if (n3 > n1 && n1 > n2){
		printf("%i\n%i\n%i\n",n2,n1,n3);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	if (n3 > n2 && n2 > n1){
		printf("%i\n%i\n%i\n",n1,n2,n3);
		printf("\n");
		printf("%i\n%i\n%i\n",n1,n2,n3);
	}
		
	return 0;	
		
}
